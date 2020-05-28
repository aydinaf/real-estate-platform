// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#pragma once
#include"Person.h"
#include "Date.h"
class Client : public Person {
public: 
	Client(); 
	Client(string, string, Date, string);
	~Client(); 
	virtual void print();
private: 
	string socialinsurancenumber;
};