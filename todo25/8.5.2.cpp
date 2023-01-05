#include <iostream>
#include <string>

/*
* ������� ����� Car (����������) � ������ company (��������) � model (������). ������-����������: PassengerCar (�������� ����������) � Bus (�������).
�� ���� ������� ��������� ����� Minivan (�������). ������� ������������ ��� ������� �� �������, ����� ��� �������� ������ � �������. �������� �������� �� �������� ������������ ������������.
*/


using namespace std;

class Car
{
public:

	string model;
	string company;

	Car()
	{

	}

	Car(string company, string model)
	{
		this->company = company;
		this->model = model;
	}

};


class PassagerCar : public virtual Car
{
public:
	PassagerCar(){}
	PassagerCar(string company, string model) :Car(company, model)
	{
		cout << "����� PaasagerCar: " << endl;
		cout << "company: \t" << company << endl;
		cout << "model: \t" << model << endl;
	}
};

class Bus : public virtual Car
{
public:
	Bus(){}
	Bus(string company, string model) :Car(company, model)
	{
		cout << "����� Bus: " << endl;
		cout << "company: \t" << company << endl;
		cout << "model: \t" << model << endl;
	}
};

class Minivan : public PassagerCar, public Bus
{
public:
	Minivan(string company, string model):Car(company, model)
	{
		cout << "����� Minivan: " << endl;
		cout << "company: \t" << company << endl;
		cout << "model: \t" << model << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Car* car = new Car("TOYOTA", "CAMRY");

	PassagerCar* passagerCar = new PassagerCar("MERCEDES", "E200");

	Bus* bus = new Bus("MAN", "NONAME");

	Minivan *mv = new Minivan("TOYOTA","RAF");

	delete car;
	delete passagerCar;
	delete bus;
	delete mv;

	return 0;
}