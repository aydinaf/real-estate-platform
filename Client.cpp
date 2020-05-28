// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#include "Client.h"
#include"Person.h"



Client::Client()
{
	Person();
	socialinsurancenumber = "";
}

Client::Client(string n, string a, Date dob, string sin)
{
	socialinsurancenumber = sin;
}


Client::~Client()
{
}

void Client::print()
{
	cout << "Seller: " << endl;
	Person::print();
	cout << "SIN: " << socialinsurancenumber << endl;
}
