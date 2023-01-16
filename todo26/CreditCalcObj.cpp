#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class PaymentSchedule;
class Calc;
struct EarlyRepayment;

struct EarlyRepayment
{
	double month;
	double amount;
	EarlyRepayment(){}

	EarlyRepayment(double month, double amount)
	{
		this->amount = amount;
		this->month = month;
	}

	~EarlyRepayment(){}
};

class PaymentSchedule
{
public:

	friend Calc;
	PaymentSchedule()
	{
		this->interestAmount = 0;
		this->numberMonth = 0;
		this->payment = 0;
		this->principalDebt = 0;
		this->earlyRepayment = 0;
		this->loanBalance = 0;
	}

	~PaymentSchedule()
	{

	}

	void Calculate(double amount, double month, double proc, int i);
	void Calculate(double amount, double month, double proc, int i, int j);

	
private:

	int numberMonth;    // номер месяца
	double principalDebt;  // основной долг
	double interestAmount; // сумма процентов
	double payment;        // платеж
	double earlyRepayment;  // досрочный платеж
	double loanBalance;     // остаток
};

class Calc
{
public:	

	Calc()
	{
		this->month = 1;
		this->amount = 1;
		this->procent = 1;
		this->ps = new PaymentSchedule();
	}

	Calc(double month, double amount, double procent)
	{
		this->month = month;
		this->amount = amount;
		this->procent = procent;
		this->ps = new PaymentSchedule();
		
		if (month == 0) 
		{
			throw exception("Количество месяцев не должно быть равно 0!!!");
		}
	}

	~Calc()
	{
		delete[] ps;
	}
	void Calculate(Calc &pcalc)
	{
		PaymentSchedule  *ps = new PaymentSchedule[(int)pcalc.month];
		double loanBalance = pcalc.amount;
		for  (int i = 0; i < pcalc.month; i++)
		{
			PaymentSchedule g;
			g.Calculate(pcalc.amount, pcalc.month, pcalc.procent, i);
			loanBalance -= g.principalDebt;
			g.loanBalance = loanBalance < 0 ? 0.00 : loanBalance;
			ps[i] = g;
		}

		pcalc.ps = ps;
	}

	void PerformRepayment(EarlyRepayment  *listArrayOfPayments)
	{	
		cout << "Пересчет графика платежей..." << endl;

		double loanBalanceTotal = this->amount;
		for (size_t i = 0; i <= sizeof(*listArrayOfPayments) / sizeof(*listArrayOfPayments); i++)
		{
			int idx = (int)listArrayOfPayments[i].month-1;
			double amount = listArrayOfPayments[i].amount;			
			
			// оставшейся срок
			int remainingPaymentAmount = (int)this->month - (int)listArrayOfPayments[i].month;
			
			loanBalanceTotal = this->ps[idx].loanBalance;
			this->ps[idx].earlyRepayment = amount;
			this->ps[idx].loanBalance = this->ps[idx].loanBalance - amount;		

			loanBalanceTotal -= amount;
			double amountloanBalance = loanBalanceTotal;
			double loanBalance = amountloanBalance;
			
			for (int j = idx+1, t = 0; j < this->month; j++, t++)
			{
					PaymentSchedule g;
					g.Calculate(amountloanBalance, remainingPaymentAmount, this->procent, t, j);
					loanBalance -= g.principalDebt;
					g.loanBalance = loanBalance<0? 0.00: loanBalance;
					this->ps[j] = g;	
			}
		}
	}

	void Print()
	{
		PaymentSchedule *ps = this->ps;
		int m = (int)this->month;
		double principalDebt = 0;
		double interestAmount = 0;
		double earlyRepayment = 0;

		for (int i = 0; i < m; i++)
		{
			cout << fixed<< setprecision(2)<<ps[i].numberMonth << " месяц  Основной платеж:" << ps[i].principalDebt << "  Процент:" << ps[i].interestAmount << "  Всего:" << ps[i].payment << " Остаток: " << ps[i].loanBalance << " Досрочное погашение: " << ps[i].earlyRepayment << endl;
			principalDebt += ps[i].principalDebt;
			interestAmount += ps[i].interestAmount;
			earlyRepayment += ps[i].earlyRepayment;
		}
		cout << "Всего уплачено: Основная сумма - " << principalDebt+earlyRepayment << " проценты - " << interestAmount << endl;
	}

private:

	double month;
	double amount;
	double procent;
	PaymentSchedule* ps;

};


void PaymentSchedule::Calculate(double amount, double month, double procent, int i)
{
	this->numberMonth    = i + 1;
	this->principalDebt  = amount / month;
	this->interestAmount = (((amount - (this->principalDebt * i)) * procent) / 12.0) / 100.0;
	this->payment		 = this->principalDebt + this->interestAmount;	
}

void PaymentSchedule::Calculate(double amount, double month, double procent, int i, int j)
{
	this->numberMonth = j + 1;
	this->principalDebt = amount / month;
	this->interestAmount = (((amount - (this->principalDebt * i)) * procent) / 12.0) / 100.0;
	this->payment = this->principalDebt + this->interestAmount;
}


int main()
{

	setlocale(LC_ALL, "ru");

	double month;
	double amount;
	double procent;

	bool earlyRepayment = false;
	int numberOfPayments;
	double monthEarlyRepayment;
	double amountEarlyRepayment;	

	cout << "Введите количество месяцев: ";
	cin >> month;
	cout << endl;

	cout << "Введите сумму кредита: ";
	cin >> amount;
	cout << endl;

	cout << "Процентая ставка: ";
	cin >> procent;	

	try
	{
		Calc pb = Calc(month, amount, procent);
		pb.Calculate(pb);
		pb.Print();

		cout << endl;
		cout << endl;

		// реализация досрочного погашения по количеству таких платежец - с выбором месяца и суммы, без проверок
		cout << "Будет ли досрочное погашение? (0-нет,1-да) ";
		cin >> earlyRepayment;

		if (earlyRepayment)
		{
			cout << "Введите количество досрочных погашений: ";
			cin >> numberOfPayments;
			
			EarlyRepayment* listArrayOfPayments = new EarlyRepayment[numberOfPayments];

			for (int i = 0; i < numberOfPayments; i++)
			{
				cout << "Номер месяца: ";
				cin >> monthEarlyRepayment;

				cout << "Сумма досрочного платежа: ";
				cin >> amountEarlyRepayment;

				EarlyRepayment *ar = new EarlyRepayment(monthEarlyRepayment,amountEarlyRepayment);
				listArrayOfPayments[i] = *ar;
				delete ar;
			}
			cout << endl;
			cout << endl;
			pb.PerformRepayment(listArrayOfPayments);
			pb.Print();
			
			delete[] listArrayOfPayments;
			
		}
		
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}

	

	return 0;
}