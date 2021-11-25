/*
Morgan Marasch
November 24, 2021
CIS 1202.501

Assignment 14: Inheritance, Polymorphism, and Virtual Functions
Goal: Create derived class Car from Vehicle base class
*/
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

#include <string>
using namespace std;

class Car : public Vehicle {
private:
	int doors;
public:
	//constructors
	Car();
	Car(string, int, int);

	//getter and setter
	int getDoors()
			{return doors;}
	void setDoors(int d)
		{doors = d;}
	
	//member function
	void displayInfo();
};
#endif