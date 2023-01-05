#include <iostream>
#include <string>

using namespace std;

/*
* ������� ����� Fraction (�����). ����� ����� ��������� � ����������� (��������, 3/7 ��� 9/2). �������������, ����� ����������� �� ��� ����� 0. �����������:

- �������������� �������� ��������� (+, -, *, /) ��� ���������� �������� � �������

- ������� �������� (-)

- ���������� ��������� ��������� ���� ������ (==, !=, <, >, <=, >=).
*/

class Fraction
{
private:
	double numerator, denominator;
public:
	Fraction(double inputNumerator, double inputDenominator)
		: numerator(inputNumerator), denominator(inputDenominator)
	{
		if (denominator == 0) throw invalid_argument("denominator = 0 !!!");;
	}

	friend Fraction operator+(const Fraction& d1, const Fraction& d2);
	friend Fraction operator-(const Fraction& d1, const Fraction& d2);
	friend Fraction operator*(const Fraction& d1, const Fraction& d2);
	friend Fraction operator/(const Fraction& d1, const Fraction& d2);
	friend Fraction operator-(const Fraction& d1);
	friend std::ostream& operator<<(std::ostream& out, const Fraction& fraction);

	void setDenominator(double inputDenominator)
	{
		if (inputDenominator == 0) inputDenominator = 0.00000001;
		denominator = inputDenominator;
	}

	void setNumerator(double inputNumerator)
	{
		numerator = inputNumerator;
	}

	double getNumerator()
	{
		return numerator;
	}

	double getDenominator()
	{
		return denominator;
	}
};

Fraction operator+(const Fraction& d1, const Fraction& d2)
{
	return Fraction(d1.numerator * d2.denominator + d2.numerator * d1.denominator, d1.denominator * d2.denominator);
}

Fraction operator-(const Fraction& d1, const Fraction& d2)
{
	return Fraction(d1.numerator * d2.denominator - d2.numerator * d1.denominator, d1.denominator * d2.denominator);
}

Fraction operator*(const Fraction& d1, const Fraction& d2)
{
	return Fraction(d1.numerator * d2.numerator, d1.denominator * d2.denominator);
}

Fraction operator/(const Fraction& d1, const Fraction& d2)
{
	return Fraction(d1.numerator * d2.denominator, d1.denominator * d2.numerator);
}

Fraction operator-(const Fraction& d1)
{
	return Fraction(-d1.numerator, -d1.denominator);
}

bool operator==(Fraction& d1, Fraction& d2)
{
	if ((d1.getNumerator() == d2.getNumerator()) && (d1.getDenominator() == d2.getDenominator())) return true;
	else return false;
}

bool operator!=(Fraction& d1, Fraction& d2)
{
	if (d1 == d2) return false;
	else return true;
}

bool operator>(Fraction& d1, Fraction& d2)
{
	if ((d1.getNumerator() / d1.getDenominator()) > (d2.getNumerator() / d2.getDenominator())) return true;
	else return false;
}

bool operator<=(Fraction& d1, Fraction& d2)
{
	if (!(d1 > d2)) return true;
	else return false;
}

bool operator<(Fraction& d1, Fraction& d2)
{
	if ((d1.getNumerator() / d1.getDenominator()) < (d2.getNumerator() / d2.getDenominator())) return true;
	else return false;
}

bool operator>=(Fraction& d1, Fraction& d2)
{
	if (!(d1 < d2)) return true;
	else return false;
}


std::ostream& operator<<(std::ostream& out, const Fraction& fraction)
{
	out << fraction.numerator << "/" << fraction.denominator;
	return out;
}

int main()
{
	try
	{	
	Fraction d1(3, 7);
	Fraction d2(9, 2);
	cout << "\n\n" << (d1 + d2);
	cout << "\n\n" << (d1 - d2);
	cout << "\n\n" << (d1 * d2);
	cout << "\n\n" << (d1 / d2);
	cout << "\n\n" << (-d1) << "\n";

	if (d1 == d2) cout << "\nFraction 1 == Fraction 2";
	if (d1 != d2) cout << "\nFraction 1 != Fraction 2";
	if (d1 > d2) cout << "\nFraction 1 > Fraction 2";
	if (d1 <= d2) cout << "\nFraction 1 <= Fraction 2";
	if (d1 < d2) cout << "\nFraction 1 < Fraction 2";
	if (d1 >= d2) cout << "\nFraction 1 >= Fraction 2";
	}
	catch (const invalid_argument& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}