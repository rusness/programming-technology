#include <stdio.h>
#include <string.h>


class Passes
{
public:
	int type; // 0 - студент, 1 - препадаватель, 2 - прочие работники
	int discount; // 0-100
	char name[50];
};

class Students : public Passes
{
public:
	int course;
	void getinfo()
	{
		printf("FIO = %s\n", name);
		printf("Course = %d\n", course);
		printf("Type pass = %d\n", type);
		printf("Discount = %d\n", discount);
	}
};

class Teachers : public Passes
{
public:
	int experience;
	void getinfo()
	{
		printf("FIO = %s\n", name);
		printf("experience = %d\n", experience);
		printf("Type pass = %d\n", type);
		printf("Discount = %d\n", discount);
	}
};

class Employees: public Passes
{
public:
	
	char occupation[50];
	void getinfo()
	{
		printf("FIO = %s\n", name);
		printf("experience = %s\n", occupation);
		printf("Type pass = %d\n", type);
		printf("Discount = %d\n", discount);
	}
};

int main()
{

	Students student;
	strcpy_s(student.name, "Petrov Ivan");
	student.discount = 5;
	student.type = 0;
	student.course = 1;
	student.getinfo();

	printf("\n\n");


	Teachers teacher;
	strcpy_s(teacher.name, "Popov Aleksey");
	teacher.type = 1;
	teacher.discount = 50;
	teacher.experience = 15;
	teacher.getinfo();

	printf("\n\n");

	Employees employe;
	strcpy_s(employe.name, "Sidorov Sergey");
	employe.type = 2;
	employe.discount = 100;
	strcpy_s(employe.occupation, "yardman");
	employe.getinfo();

	return 0;
}