#include <iostream>

/*
* Задание №1

Создать абстрактный класс Figure (фигура). Его наследниками являются классы Parallelogram (параллелограмм) и Circle (круг). Класс Parallelogram — базовый для классов Rectangle (прямоугольник), Square (квадрат), Rhombus (ромб).

Для всех классов создать конструкторы. Для класса Figure добавить виртуальную функцию area() (площадь). Во всех остальных классах переопределить эту функцию, исходя из геометрических формул нахождения площади.
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
	std::cout << "При a=3 и h=4 площадь параллелограмма = " << p.area() << std::endl;


	Circle c(5);
	std::cout << "При r=5 площадь круга = " << c.area() << std::endl;

	Rectangle r(4,4);
	std::cout << "При a=4 и h=4 площадь прямоугольника = " << r.area() << std::endl;

	Square s(6);
	std::cout << "При a=6 площадь квадтрата = " << s.area() << std::endl;

	Rhombus rh(6, 7);
	std::cout << "При a=6 и h=7 площадь ромба = " << rh.area() << std::endl;

	return 0;
}