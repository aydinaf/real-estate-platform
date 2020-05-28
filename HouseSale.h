// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#pragma once
#include "Property.h"
#include "Client.h"
#include "RealEstateAgent.h"
#include <string>
#include<iostream>
using namespace std;

class HouseSale : public Property
{
public:
	HouseSale();
	HouseSale(string, string, Client*, RealEstateAgent*, Date, int, int, double);
	virtual void print();

private:
	int year_of_built; int no_of_rooms; int price;
};

