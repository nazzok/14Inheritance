/*
Morgan Marasch
November 24, 2021
CIS 1202.501

Assignment 14: Inheritance, Polymorphism, and Virtual Functions
Goal: Create a base class Vehicle
*/
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle {
private:
	string manufacturer;
	int year;
public:
	//constructors
	Vehicle();
	Vehicle(string, int);

	//getters
	string getManufacturer()
		{return manufacturer;}
	int getYear()
		{return year;}

	//setters
	void setManufacturer(string m)
		{manufacturer = m;}
	void setYear(int y)
		{year = y;}

	//member functions
	virtual void displayInfo();
};
#endif