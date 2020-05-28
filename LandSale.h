// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#pragma once
#include "Property.h"
#include "RealEstateAgent.h"
#include "Client.h"
#include "Date.h"


class LandSale : public Property
{
private:
	double area;
	int price;
public:
	LandSale();
	LandSale(string, string, Client, RealEstateAgent*  , Date, double, int);
	~LandSale();
	 virtual void print();
};

