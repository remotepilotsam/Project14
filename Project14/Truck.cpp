//Samuel Bryan
//CIS 1202 800
//July 24th, 2022

#include <iostream>
#include <iomanip>
#include "Truck.h"
#include "Vehicle.h"

using namespace std;

void Truck::displayTruckInfo(string tManu, int tYear, int tCapa)
{
	cout << "Truck Information: " << endl;
	cout << "Manufacturer: " << tManu << endl;
	cout << "Year Built: " << tYear << endl;
	cout << "Towing Capacity: " << tCapa << endl;
}


