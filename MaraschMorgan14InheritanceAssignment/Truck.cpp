/*
Morgan Marasch
November 25, 2021
CIS 1202.501

Assignment 14: Inheritance, Polymorphism, and Virtual Functions
Goal: Define methods from the derived Truck class
*/

#include "Truck.h"
#include <iostream>

//default constructor
Truck::Truck() : Vehicle() {
	towingCapacity = 1000;
}

//overloaded constructor
Truck::Truck(string m, int y, int t) : Vehicle(m, y) {
	towingCapacity = t;
}

//overridden displayInfo function
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}