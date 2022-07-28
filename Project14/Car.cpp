//Samuel Bryan
//CIS 1202 800
//July 28th, 2022

#include <iostream>
#include <iomanip>
#include "Car.h" //Includes Car header file
#include "Vehicle.h" //Includes Vehicle header file

using namespace std;

void Car::displayCarInfo(string cManu, int cYear, int cDoors) //Display function
{
	cout << "Car Information: " << endl;
	cout << "Manufacturer: " << cManu << endl;
	cout << "Year Built: " << cYear << endl;
	cout << "Number of Doors: " << cDoors << endl;
}


