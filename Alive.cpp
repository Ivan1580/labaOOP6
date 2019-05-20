#include "Alive.h"
#include <string>
#include <iostream>


istream& operator>> (istream& in, Alive& creature)
{
	cout << "Enter Movement: ";
	in >> creature.move;
	cout << "Enter enviroment: ";
	in >> creature.enviroment;

	return in;
}

ostream& operator<< (ostream& out, const Alive& creature)
{
	out << "Movement: " << creature.move << endl;
	out<< "Enviroment: " << creature.enviroment << endl;

	return out;
}

Fish::Fish(string m, string e)
{
	move = m;
	enviroment = e;
	species = "Belyga";
}

void Fish::Display_f()
{
	cout << "Movement: " << move << endl;
	cout <<	"Enviroment: " << enviroment << endl;
	cout << "Species: " << species << endl;
}


Bird::Bird(string m, string e)
{
	move = m;
	enviroment = e;
	fly = false;
	species = "Strays";
}

void Bird::Display_b()
{
	if (fly == true)
	{ 
		cout << "Movement: " << move << endl;
	}
	else
	{
		cout << "Movement: Ne" << move << endl;
	}
	cout << "Enviroment: " << enviroment << endl;
	cout << "Species: " << species << endl;
	if (fly == true)
	{
		cout << "Fly? Yes"  << endl;
	}
	else
	{
		cout << "Fly? No" << endl;
	}
}

Animal::Animal(string m, string e)
{
	move = m;
	enviroment = e;
	food = "Meat";
	species = "Tiger";
}

void Animal::Display_an()
{
	cout << "Movement: " << move << endl;
	cout << "Enviroment: " << enviroment << endl;
	cout << "Species: " << species << endl;
	cout << "Food: " << food << endl;
}