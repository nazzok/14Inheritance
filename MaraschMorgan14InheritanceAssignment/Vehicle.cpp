/*
Morgan Marasch
November 24, 2021
CIS 1202.501

Assignment 14: Inheritance, Polymorphism, and Virtual Functions
Goal: Define methods from the Vehicle class
*/

#include "Vehicle.h"
#include <iostream>

//default constructor
Vehicle::Vehicle() {
	manufacturer = "";
	year = 0;
}

//overloaded constructor
Vehicle::Vehicle(string m, int y) {
	manufacturer = m;
	year = y;
}

//display information
void Vehicle::displayInfo() {
	cout << "Vehicle information:\nManufacturer: " << manufacturer << "\nYear Built: " << year << endl;
}