#pragma once
#include <iostream>
using namespace std;

class Employer
{
	string _name;
public:
	Employer(string);
	string getName();
	virtual void print() = 0;

};