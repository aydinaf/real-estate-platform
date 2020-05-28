// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703


#include "HouseSale.h"
#include<iostream>
using namespace std;



HouseSale::HouseSale()
{
	Property();
	year_of_built = 0;
	price = 0;
	no_of_rooms = 0;
}

HouseSale::HouseSale(string sa, string cn, Client *s, RealEstateAgent *ag, Date ld, int yb, int p, double nr)
	: Property(sa, cn, s, ag, ld), price(p), year_of_built(yb), no_of_rooms(nr) {}

void HouseSale::print() {
	cout << "Seller: ";
	getseller();
	cout << endl << "Agent: ";
	getagent();
	cout << endl << "Build Year: " << year_of_built << endl;
	cout << "Num of Rooms: " << no_of_rooms << endl;
	cout << "Listing Price: " << price << endl;
	cout << "Location: " << get_street_address<<endl;

}
