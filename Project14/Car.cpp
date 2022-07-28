//Samuel Bryan
//CIS 1202 800
//July 27th, 2022

#include <iostream>
#include <iomanip>
#include "Car.h"
#include "Vehicle.h"

using namespace std;

void Car::displayCarInfo(string cManu, int cYear, int cDoors) 
{
	cout << "Car Information: " << endl;
	cout << "Manufacturer: " << cManu << endl;
	cout << "Year Built: " << cYear << endl;
	cout << "Number of Doors: " << cDoors << endl;
}


