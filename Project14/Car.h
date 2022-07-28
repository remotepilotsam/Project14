//Samuel Bryan
//CIS 1202 800
//July 24th, 2022
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car /* : public Vehicle */
{
private:
	string carManufatuer;
	int carYear;
	int carDoors;
public:
	Car(string cManu, int cYear, int cDoors) /* : Vehicle(carManufatuer, carYear) */
	{
		displayCarInfo(cManu, cYear, cDoors);
	}
	void displayCarInfo(string, int, int);
};
#endif

