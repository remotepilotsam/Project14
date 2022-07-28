//Samuel Bryan
//CIS 1202 800
//July 28th, 2022
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
	string manu;
	int year;
public:
	Vehicle(string manu, int year) //Constructor
	{
		displayVehicleInfo(manu, year); //Calls display function
	}
	void displayVehicleInfo(string, int); //Display function
};

#endif