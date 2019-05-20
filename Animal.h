#pragma once
#include <iostream>
#include <string>

using namespace std;
class Animal1
{
public:
	string food;
	string species;
	Animal1(string f, string s);
	void Display_an();
	~Animal1(){}
};

class Dog : public Animal1
{
public:
	string breed;
	Dog(string f, string s);
	void Display_d();
	~Dog() {}
};

class Cat : public Animal1
{
public:
	string breed;
	Cat(string f, string s);
	void Display_c();
	~Cat() {}
};