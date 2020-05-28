// Assignment 3
// Aydin Azari Farhad 40063330
// Mohammed Hossein Lakkis 40089703

#pragma once
#include<iostream>
#include<string>
#include "Date.h"
using namespace std;

class Person {
public: 
	Person();
	Person(string, string); 
	string getName();
	~Person();
	virtual void print();

private: 
	string name; 
	string address;
};