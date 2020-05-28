// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#include "Date.h"
#include <iostream>


Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}

Date::Date(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
}

void Date::setDay(int d) { day = d; }

int Date::getDay() { return day; }

void Date::setMonth(int m) { month = m; }

int Date::getMonth() { return month; }

void Date::setYear(int y) { year = y; }

int Date::getYear() { return year; }

void Date::print() {
	std::cout << getMonth() << " / " << getDay() << " / " << getYear();
}
