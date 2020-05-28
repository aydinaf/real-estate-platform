// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#include "RealEstateAgent.h"
#include "Person.h"
#include <iostream>

using namespace std;



RealEstateAgent::RealEstateAgent()
{
	Person();
	employee_id = 0;

}

RealEstateAgent::RealEstateAgent(string n, string a, Date dob, int id)
{
	employee_id = id;
}

int RealEstateAgent::getEmployye_id()
{
	return employee_id;
}

string RealEstateAgent::getName()
{
	return Person::getName();
}


RealEstateAgent::~RealEstateAgent()
{
}

void RealEstateAgent::print()
{
	cout << "Real estate agent  : " << endl;
	Person::print();
	cout << "Employee id        : " << employee_id;
	cout << "Date of employment : ";
	employment_date.print();
	cout << endl;

}
