// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#include "Property.h"



Property::Property()
{
	street_address = "";
	cityName = "";
	seller = nullptr;
	buyer = nullptr;
	agent = nullptr;
}

Property::Property(string sa, string cn, Client* s, RealEstateAgent * ag, Date ld)
{
	street_address = sa;
	cityName = cn;
	seller = s;
	buyer = nullptr;
	agent = ag;
	listingDate = ld;
}


Property::~Property()
{

}

void Property::print()
{
	cout << "Street address    : " << street_address << endl;
	cout << "City name         : " << cityName << endl;
	cout << "Seller            : " << endl;
	seller->print();
	cout << "Agent             : " << endl;
	agent->print();
}

string Property::get_street_address() {
	return street_address;
}

string Property::getseller() {
	seller->print;
}

string Property::getagent() {
	agent->print;
}
