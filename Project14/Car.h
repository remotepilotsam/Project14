//Samuel Bryan
//CIS 1202 800
//July 28th, 2022
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Vehicle.h" //Includes Vehicle header file

using namespace std;

class Car /* : public Vehicle */ //Couldn't get inheritance class working
{
private:
	string carManufatuer;
	int carYear;
	int carDoors;
public:
	Car(string cManu, int cYear, int cDoors) /* : Vehicle(carManufatuer, carYear) */ //Constructor
	{
		displayCarInfo(cManu, cYear, cDoors); 
	}
	void displayCarInfo(string, int, int); //Display function
};
#endif

