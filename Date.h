// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#pragma once
class Date {
public: 
Date(); 
Date(int, int, int); 
void print();
void setDay(int);
int getDay();
void setMonth(int);
int getMonth();
void setYear(int);
int getYear();
void print();

private: 
int month; int day; int year;
};