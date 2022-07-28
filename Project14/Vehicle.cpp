//Samuel Bryan
//CIS 1202 800
//July 27th, 2022

#include <iostream>
#include <iomanip>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	//vehicle input variables
	string userVManu;
	int userVYear;

	cout << "Vehicle Program \n\n";
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, userVManu);
	cout << "Enter the Year Built: ";
	cin >> userVYear;
	Vehicle displayVehicleInfo(userVManu, userVYear);
	
	//car input variables
	string userCManu;
	int userCYear;
	int userCDoors;
	
	cout << "\n\nCar Program\n\n";
	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, userCManu);
	cout << "Enter the Year Built: ";
	cin >> userCYear;
	cout << "Enter the number of doors: ";
	cin >> userCDoors;
	Car displayCarInfo(userCManu, userCYear, userCDoors);
	
	//truck input variables
	string userTManu;
	int userTYear;
	int userTTowing;

	cout << "\n\nTruck Program\n\n";
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, userTManu);
	cout << "Enter the Year Built: ";
	cin >> userTYear;
	cout << "Enter the towing capacity: ";
	cin >> userTTowing;
	Truck displayTruckInfo(userTManu, userTYear, userTTowing);

	system("pause");
	return 0;
}

void Vehicle::displayVehicleInfo(string manu, int year)
{
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << manu << endl;
	cout << "Year Built: " << year << endl;
}






