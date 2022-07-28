//Samuel Bryan
//CIS 1202 800
//July 28th, 2022

#include <iostream>
#include <iomanip>
#include "Truck.h" //Calls Truck header file
#include "Vehicle.h" //Calls Vehicle header file

using namespace std;

void Truck::displayTruckInfo(string tManu, int tYear, int tCapa) //Displays user input
{
	cout << "Truck Information: " << endl;
	cout << "Manufacturer: " << tManu << endl;
	cout << "Year Built: " << tYear << endl;
	cout << "Towing Capacity: " << tCapa << endl;
}


