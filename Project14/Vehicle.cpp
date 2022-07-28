//Samuel Bryan
//CIS 1202 800
//July 28th, 2022

#include <iostream>
#include <iomanip>
#include "Vehicle.h" //Includes Vehicle header file
#include "Car.h" //Includes Car header file
#include "Truck.h" //Includes Truck header file

using namespace std;

int main()
{
	//vehicle input variables
	string userVManu;
	int userVYear;

	cout << "Vehicle Program \n\n";
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, userVManu); //Gets user input for vehicle
	cout << "Enter the Year Built: ";
	cin >> userVYear; //Gets user input for year
	Vehicle displayVehicleInfo(userVManu, userVYear); //Calls function to display user inputs 
	
	//car input variables
	string userCManu; 
	int userCYear;
	int userCDoors;
	
	cout << "\n\nCar Program\n\n";
	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore(); //Allows for user to enter car manufacturer.  Previously without this line, program would skip getline in line 36
	getline(cin, userCManu); //Gets user input for manufacturer
	cout << "Enter the Year Built: ";
	cin >> userCYear; //Gets user input for car year
	cout << "Enter the number of doors: ";
	cin >> userCDoors; //Gets user input for car doors
	Car displayCarInfo(userCManu, userCYear, userCDoors); //Calls function to display user inputs
	
	//truck input variables
	string userTManu;
	int userTYear;
	int userTTowing;

	cout << "\n\nTruck Program\n\n";
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, userTManu);//Gets user input for manufacturer
	cout << "Enter the Year Built: ";
	cin >> userTYear;//Gets user input for car year
	cout << "Enter the towing capacity: ";
	cin >> userTTowing;//Gets user input for car doors
	Truck displayTruckInfo(userTManu, userTYear, userTTowing);

	system("pause");
	return 0;
}

void Vehicle::displayVehicleInfo(string manu, int year) //Function to display vehicle
{
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << manu << endl;
	cout << "Year Built: " << year << endl;
}






