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
	Ship object_ship1;
	object_ship1.mFuelVolume = 725;
	object_ship1.mFuelType = "petrol";

	Ship object_ship2("Titanik", 3000, 3, 523, "Lviv - Zhmerynka");
	object_ship2.mFuelVolume = 600;
	object_ship2.mFuelType = "gas";

	Ship object_ship3("Lolitka", 2000, 2, 635, "Bibrka - Stryy");
	object_ship3.mFuelVolume = 2000;
	object_ship3.mFuelType = "woods";

	showShipInfo(&object_ship1);
	showShipInfo(&object_ship2);
	showShipInfo(&object_ship3);
}


