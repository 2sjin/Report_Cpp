#pragma once
#include <iostream>
using namespace std;

class Seat {
	string name;
public:
	Seat();
	void setName(string name);
	void resetName();
	string getName();
};