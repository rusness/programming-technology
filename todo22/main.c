#include <stdio.h>
#include <string.h>

struct Persons
{		
    private:	    
		char name[50];
		int age;
		int gender; // 1- мужской, 2 - женский
		int weight;
		
	public:		
		void showinfo()
		{
			printf("Name = %s\n",name);
			printf("Age = %d\n", age);
			
			char isman[]="man";
			char iswomen[]="women";
			
			if (gender==1)
				printf("Gender = %s\n", isman);		
			else 
			 	printf("Gender = %s\n", iswomen);   	 
			    
			printf("Weight = %d", weight);
		}
		void setdata(char n[], int a, int gen,int w)
		{			
			strcpy(name,n);			
			age  = a;
			gender = gen;
			weight = w;	
		}
	
};

struct Students
{
	struct Persons person;
	
	private:
		int course;
	public:
	    void setcourse(int c)
		{
			course = c;
		}
		
		int getcourse()
		{
			return course;	
		}		
};

int main() 
{	

	int age;
	int gender;
	int weight;
	char name[50];
	
	Persons Molly;
    strcpy(name,"Molly");
	age = 17;
	gender = 2;
	weight = 50;
	
	Molly.setdata(name,age,gender,weight);
	Molly.showinfo();
	
	printf("\n\n");
	
	Persons Kelvin;
	strcpy(name,"Kelvin");
	age = 21;
	gender = 1;
	weight = 65;
	Kelvin.setdata(name,age,gender,weight);
	Kelvin.showinfo();
	
	printf("\n\n");
	
	// студент Mary
	strcpy(name,"Nary");
	age = 20;
	gender = 2;
	weight = 52;
	Students Student;
	Student.person.setdata(name,age,gender,weight);
	Student.setcourse(1);
	
	printf("Student info:\n");
	Student.person.showinfo();
	printf("\n");
	printf("Course = %d", Student.getcourse());
	
	return 0;
}
