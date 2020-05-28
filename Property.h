// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#pragma once
#include "Client.h"
#include "RealEstateAgent.h"
#include "person.h"


class Property
{
private:
	string street_address;
	string cityName;
	Client * seller;
	Client * buyer;
	RealEstateAgent * agent;
	Date listingDate;
	
public:
	Property();
	Property(string, string, Client*, RealEstateAgent*, Date);
	~Property();
	virtual void print();
	string get_street_address();
	string getseller();
	string getagent();
};

