//Samuel Bryan
//CIS 1202 800
//July 27th, 2022
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
	Vehicle(string manu, int year)
	{
		displayVehicleInfo(manu, year); 
	}
	void displayVehicleInfo(string, int);
};

#endif