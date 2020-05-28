// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class RealEstateAgent : public Person
{
private:
	Date employment_date;
	int employee_id;
public:
	RealEstateAgent();
	RealEstateAgent(string, string, Date, int);
	int getEmployye_id();
	string getName();
	~RealEstateAgent();
	virtual void print();
};

