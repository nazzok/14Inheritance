/*
Morgan Marasch
November 25, 2021
CIS 1202.501

Assignment 14: Inheritance, Polymorphism, and Virtual Functions
Goal: Create derived class Truck from Vehicle base class
*/
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

#include <string>
using namespace std;

class Truck : public Vehicle {
private:
	int towingCapacity;
public:
	//constructors
	Truck();
	Truck(string, int, int);

	//getter and setter
	int getTowing()
	{
		return towingCapacity;
	}
	void setTowing(int t)
	{
		towingCapacity = t;
	}

	//member function
	void displayInfo();
};
#endif