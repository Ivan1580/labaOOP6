#pragma once
#include <string>
#include <iostream>

using namespace std;

class Alive
{
public:
	string move;
	string enviroment;

	friend istream& operator>>(istream& in, Alive& creature);
	friend ostream& operator<< (ostream& out, const Alive& creature);
};

class Fish : public Alive
{
protected:
	string species;
public:
	Fish(string m, string e);
	void Display_f();
	~Fish(){}
};

class Bird : public Alive
{
protected:
	string species;
	bool fly;
public:
	Bird(string m, string e);
	void Display_b();
	~Bird(){}
};

class Animal : public Alive
{
public:
	string food;
	string species;
	Animal(string m, string e);
	void Display_an();
	~Animal(){}
};