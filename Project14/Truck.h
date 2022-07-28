//Samuel Bryan
//CIS 1202 800
//July 24th, 2022

#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Truck  /* : public Vehicle */
{
private:
	string truckManufactuer;
	int truckYear;
	int truckTowing;
public:
	Truck(string tManu, int tYear, int tCapa) /* : Vehicle(truckManufactuer, truckYear) */
	{
		displayTruckInfo(tManu, tYear, tCapa);
	}
	void displayTruckInfo(string, int, int);
};

#endif

