/*
Morgan Marasch
November 24, 2021
CIS 1202.501

Assignment 14: Inheritance, Polymorphism, and Virtual Functions
Goal: Create a function to test the classes and methods
*/

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string manufacturer;
	int year;
	int doors;
	int towingCapacity;

	cout << "Vehicle Program\n\n";

	//test Vehicle class
	cout << "Vehicle:\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	Vehicle vehicle = Vehicle(manufacturer, year);
	vehicle.displayInfo();

	//test Car class
	cout << endl << "Car:\nEnter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	Car car = Car(manufacturer, year, doors);
	car.displayInfo();


	return 0;
}