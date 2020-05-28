// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#include "Person.h"
#include <iostream>

using namespace std;



Person::Person()
{
	name = "";
	address = "";
}

Person::Person(string n, string a) {
	name = n;
	address = a;
}

string Person::getName()
{
	return name;
}

Person::~Person()
{
	cout << "Obj Person Destructed!" << endl;
}

void Person::print() {
	cout << "Name          : " << name << endl;
	cout << "Address       : " << address << endl;
	cout << endl;
}