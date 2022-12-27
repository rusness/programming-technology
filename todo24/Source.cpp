#include <iostream>
using namespace std;


class Function
{
protected:
	double a, b, c, x;
public:
	virtual double Foo(double x) = 0;
    //virtual void Print() = 0;

	void SetParams(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;        
	}

    void setArgument(double x)
    {
        this->x = x;
    }
    void Print()
    {
        cout << "f(" << x << ")=" << this->Foo(x) << endl;
    }
};

class Parabola :public Function
{
public:
    double Foo(double x) override
    {
        return a * x * x + b * x + c;
    }
  
};

class Ellipse :public Function
{

public:
	double Foo(double x) override
	{
		return sqrt(a - x * x * b) + c;
	}

};

class Hyperbola: public Function
{
public:
    double Foo(double x) override
    {
        return a / (x - b) + c;
    }
 
};


void Print( Function& f)
{
    f.Print();
}

int main(){
	
    setlocale(LC_ALL, "ru");

    Function *f;

    double a, b, c, x;

    cout << "1) Эллипс" << endl;
    cout << "2) Парабола" << endl;
    cout << "3) Гипербола" << endl;
    cout << "Выберите функцию: ";

    char ch;
    cin >> ch;
    switch (ch)
    {
    case '1': f = new Ellipse; break;
    case '2': f = new Parabola; break;
    case '3': f = new Hyperbola; break;
    default:
        cout << "Выбран ошибочный пункт меню! " << endl;
        return 1;
    break;
    }

    cout << "Введите 3 параметра функции:" << endl;
    cin >> a >> b >> c;
    f->SetParams(a, b, c);

    cout << "Введите аргумент функции:" << endl;
    cin >> x;  
    cin.get();
    f->setArgument(x);

    Print(*f);  

    delete f;

	return 0;
}