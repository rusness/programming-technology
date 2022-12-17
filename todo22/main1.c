#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Names
{
	public:
	char name[50];
};

class Passes
{
	public:
	int type; // 0 - студентю, 1 - преподаватель, 2 - прочий работник
	int discount; // 0-100
};

class Students
{	
	public:
	struct Names FIO;
	struct Passes Pass;
	int course;
	
	void getinfo()
	{
		printf("FIO = %s\n", FIO.name);
		printf("Course = %d\n", course);
		printf("Type pass = %d\n", Pass.type);
		printf("Discount = %d\n", Pass.discount);	
	}
};

class Teachers
{
	public:
	struct Names FIO;
	struct Passes Pass;
	int experience;
	void getinfo()
	{
		printf("FIO = %s\n", FIO.name);
		printf("experience = %d\n", experience);
		printf("Type pass = %d\n", Pass.type);
		printf("Discount = %d\n", Pass.discount);	
	}
	
};

class Employees
{
	public:
	struct Names FIO;
	struct Passes Pass;
	char occupation[50];
	void getinfo()
	{
		printf("FIO = %s\n", FIO.name);
		printf("experience = %s\n", occupation);
		printf("Type pass = %d\n", Pass.type);
		printf("Discount = %d\n", Pass.discount);	
	}
};

int main()
{
	// студент Петров
	struct Students student;
	strcpy(student.FIO.name, "Petrov Ivan");
	student.Pass.discount = 5;
	student.Pass.type     = 0;
	student.course = 1;	
	student.getinfo();
	
	printf("\n\n");
	// преподаватель Попов
	struct Teachers teacher;
	strcpy(teacher.FIO.name,"Popov Aleksey");
	teacher.Pass.type = 1;
	teacher.Pass.discount = 50;
	teacher.experience = 15;
	teacher.getinfo();
	
	printf("\n\n");
	
	// дворник Сидоров
	struct Employees employe;
	strcpy(employe.FIO.name,"Sidorov Sergey");
	employe.Pass.type = 2;
	employe.Pass.discount = 100;
	strcpy(employe.occupation,"yardman");
	employe.getinfo();	
	
	return 0;
}
