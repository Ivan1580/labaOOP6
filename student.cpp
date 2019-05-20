#include "student.h"
#include <iostream>
#include <string>
using namespace std;

void Student::Display_s()
{
	cout << "      Student "<<endl;
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Group: " << group << endl;
	cout << "Age: " << age << endl;

}
Student::Student(string sn,string n ,string g,int a)
{
	surname = sn;
	name = n;
	group = g;
	age = a;
}

void Starosta::Display_st()
{
	cout << "      Starosta " << endl;
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Group: " << group << endl;
	cout << "Age: " << age << endl; 
	cout << "Mobilephone: " << mobilephone;

}

Starosta::Starosta(string sn,string n,string g,int a,string mp):Student(sn, n, g, a)
{
	
	mobilephone = mp;
	Display_st();
}

