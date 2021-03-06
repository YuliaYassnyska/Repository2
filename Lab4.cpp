#include "pch.h"
#include <iostream>
#include "ship.h"
using namespace std;

void showShipInfo(Ship *ship)
{
	cout << "************************Ship info************************" << endl;
	cout << "Name: " << ship->getName() << endl;
	cout << "Capacity: " << ship->getCapacity() << endl;
	cout << "Containers count: " << ship->getContainersCount() << endl;
	cout << "Fuel volume: " << ship->mFuelVolume << endl;
	cout << "Fuel type: " << ship->mFuelType << endl;
	cout << "People count: " << ship->getPeopleCount() << endl;
	cout << "Route: " << ship->getRoute() << endl;
	cout << endl;
}


int main()
{
	Ship ship1;
	ship1.mFuelVolume = 725;
	ship1.mFuelType = "petrol";

	Ship ship2("Titanik", 3000, 3, 523, "Lviv - Zhmerynka");
	ship2.mFuelVolume = 600;
	ship2.mFuelType = "gas";

	Ship ship3("Lolitka", 2000, 2, 635, "Bibrka - Stryy");
	ship3.mFuelVolume = 2000;
	ship3.mFuelType = "woods";

	showShipInfo(&ship1);
	showShipInfo(&ship2);
	showShipInfo(&ship3);
}

