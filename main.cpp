#include <iostream>
#include <string>
#include "student.h"
#include "Alive.h"
#include "Animal.h"
using namespace std;

int main()
{
	/*string sn, n, g, mp;
	int a;
	double sc;

	cout << "Enter Surname: ";
	cin >> sn;
	cout << "Enter Name: ";
	cin >> n;
	cout << "Enter group: ";
	cin >> g;
	cout << "Enter age: ";
	cin >> a;
	Student st1(sn, n, g, a);
	st1.Display_s();
	cout << "Enter mobilephone: ";
	cin >> mp;
	cout << endl;
	Starosta st(sn, n, g, a, mp);


	cout << "Fish" << endl;
	Alive F;
	cin >> F;
	cout << endl;
	cout << F<<endl;
	Fish fish(F.move, F.enviroment);
	fish.Display_f();

	cout << "\nBird" << endl;
	Alive B;
	cin >> B;
	cout << endl;
	cout << B << endl;
	Bird bird(B.move, B.enviroment);
	bird.Display_b();

	cout << "\nAnii" << endl;
	Alive Anii;
	cin >> Anii;
	cout << endl;
	cout << Anii<<endl;
	Animal animal(Anii.move, Anii.enviroment);
	animal.Display_an();
	*/

	cout << "\nDog vs Cat" << endl;
	Animal1 animal1("meat", "dog");
	Animal1 animal2("milk", "cat");
	animal1.Display_an();
	animal2.Display_an();

	Dog dog1(animal1.food ,animal1.species);
	dog1.Display_d();

	Cat cat1(animal2.food, animal2.species);
	cat1.Display_c();


}