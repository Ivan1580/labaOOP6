#include <iostream>
#include <string>
#include "Animal.h"

void Animal1::Display_an()
{
	cout << "      Animal " << endl;
	cout << "Food: " << food << endl;
	cout << "Species: " << species << endl;

}
Animal1::Animal1(string f, string s)
{
	food = f;
	species = s;
}

Dog::Dog(string f, string s)
	:Animal1(f, s)
{
	breed = "Taksa";
}

void Dog::Display_d()
{
	cout << "\nFood: " << food << endl;
	cout << "\nVid: " << species << endl;
	cout << "\nPoroda: "<< breed << endl;
}


Cat::Cat(string f, string s)
	:Animal1(f, s)
{
	breed = "Egipetskii";
}

void Cat::Display_c()
{
	cout << "\nFood: " << food << endl;
	cout << "\nVid: " << species << endl;
	cout << "\nPoroda: " << breed << endl;
}