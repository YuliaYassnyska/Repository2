#ifndef SHIP_H
#define SHIP_H

#include <string>
using namespace std;

class Ship
{
private:
	string mName;
	int mCapacity;
	int mContainersCount;

protected:
	int mPeopleCount;
	string mRoute;

public:
	Ship();
	Ship(std::string name, int capacity, int containersCount, int peopleCount, std::string route);
	~Ship();
	string getName() const;
	int getCapacity() const;
	int getContainersCount() const;

	int getPeopleCount() const;
	string getRoute() const;

	int mFuelVolume;
	string mFuelType;
};


#endif 

