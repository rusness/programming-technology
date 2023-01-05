#include <iostream>

/*
* ������� �1

������� ����������� ����� Figure (������). ��� ������������ �������� ������ Parallelogram (��������������) � Circle (����). ����� Parallelogram � ������� ��� ������� Rectangle (�������������), Square (�������), Rhombus (����).

��� ���� ������� ������� ������������. ��� ������ Figure �������� ����������� ������� area() (�������). �� ���� ��������� ������� �������������� ��� �������, ������ �� �������������� ������ ���������� �������.
*/


class Figure
{
public:
	virtual double area() = 0;
};

class Parallelogram :public Figure
{
protected:
	double a;
	double h;

public:
	Parallelogram(double a, double h)
	{
		this->a = a;
		this->h = h;
	}

	double area() override
	{
		return a * h;
	}
};

class Circle : public Figure
{
private:
	double r;

public:
	Circle(double r)
	{
		this->r = r;
	}

	double area() override
	{
		return 3.14 * r * r;
	}
};

class Rectangle :public Parallelogram
{
public:
	Rectangle(double a, double h):Parallelogram(a,h){}

	double area()
	{
		return a * h;
	}

};

class Square : public Parallelogram
{
public:
	Square(double a):Parallelogram(a,a){}

	double area() override
	{
		return a * a;
	}
};

class Rhombus : public Parallelogram
{
public:
	Rhombus(double a, double h):Parallelogram(a, h){}

	double area()
	{
		return a * h;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");	
	
	Parallelogram p(3,4);
	std::cout << "��� a=3 � h=4 ������� ��������������� = " << p.area() << std::endl;


	Circle c(5);
	std::cout << "��� r=5 ������� ����� = " << c.area() << std::endl;

	Rectangle r(4,4);
	std::cout << "��� a=4 � h=4 ������� �������������� = " << r.area() << std::endl;

	Square s(6);
	std::cout << "��� a=6 ������� ��������� = " << s.area() << std::endl;

	Rhombus rh(6, 7);
	std::cout << "��� a=6 � h=7 ������� ����� = " << rh.area() << std::endl;

	return 0;
}