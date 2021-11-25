/*
Morgan Marasch
November 24, 2021
CIS 1202.501

Assignment 14: Inheritance, Polymorphism, and Virtual Functions
Goal: Define methods from the derived Car class
*/

#include "Car.h"
#include <iostream>

//default constructor
Car::Car() : Vehicle() {
	doors = 4;
}

//overloaded constructor
Car::Car(string m, int y, int d) : Vehicle(m, y) {
	doors = d;
}

//overridden displayInfo function
void Car::displayInfo(){
	Vehicle::displayInfo();
	cout << "Doors: " << doors << endl;
}