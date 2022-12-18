#include <stdio.h>
#include <string.h>

class Items
{
public:
	int amor;
	int hp;
	int attack;
};

class Guns : public Items
{
public:

	int shots_per_minute; 
};

class Knifes : public Items
{
public:
	int blade_length; // длина лезвия в см
};

class Persons
{
public:
	Guns Gun;
	Knifes Knife;

	char name[50];
	int amor;

	bool use_knife;
	bool use_gun;
};


int main()
{

	Persons Molly;
	strcpy_s(Molly.name, "Molly");
	Molly.amor = 100;
	Molly.Gun.amor = 90;
	Molly.Gun.attack = 1000;
	Molly.Gun.hp = 100;
	Molly.use_gun = true;
	Molly.use_knife = false;



	return 0;
}