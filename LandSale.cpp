// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#include "LandSale.h"
#include "Property.h"
#include "RealEstateAgent.h"
#include "Client.h"



LandSale::LandSale()
{
	Property();
	area = 0.0;
	price = 0;
}

LandSale::LandSale(string sn, string cn, Client s, RealEstateAgent * ag, Date ld, double ar, int pr) 
	: Property(sn , cn , &s , ag , ld), area(ar) , price(pr)
{
}



LandSale::~LandSale()
{

}

void LandSale::print()
{
	cout << "Seller    : " << endl;
	getseller();
	cout << "Agent     : " << endl;
	getagent();
	cout << "area      : " << area <<endl;
	cout << "Listing Price : " << price << endl;
	cout << "Location : " << get_street_address << endl;


	
}
