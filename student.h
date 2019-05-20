#pragma once
#include <string>
using namespace std;

class Student
{
protected:
	string surname;
	string name;
	string group;
	int age;
public:
	Student(string sn, string n, string g, int a);
	void Display_s();
	~Student(){}
};

class Starosta : public Student
{
protected:
	string mobilephone;
public:
	Starosta(string sn, string n, string g, int a, string mp);
	void Display_st();
	~Starosta() {}
};