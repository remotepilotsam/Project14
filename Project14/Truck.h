//Samuel Bryan
//CIS 1202 800
//July 28th, 2022

#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Truck  /* : public Vehicle */ //Couldnt get inheritance working
{
private:
	string truckManufactuer;
	int truckYear;
	int truckTowing;
public:
	Truck(string tManu, int tYear, int tCapa) /* : Vehicle(truckManufactuer, truckYear) */ //Constructor
	{
		displayTruckInfo(tManu, tYear, tCapa); 
	}
	void displayTruckInfo(string, int, int); //Display function 
};

#endif

