#include "pch.h"
#include "ship.h" 


Ship::Ship() : mName("Ren"), mCapacity(1000), mContainersCount(1), mPeopleCount(100), mRoute("Kyiv - New York")
{
}

Ship::Ship(string name, int capacity, int containersCount, int peopleCount, string route)
	: mName(name), mCapacity(capacity), mContainersCount(containersCount), mPeopleCount(peopleCount), mRoute(route)
{
}

Ship::~Ship()
{
}

string Ship::getName() const
{
	return mName;
}

int Ship::getPeopleCount() const
{
	return mPeopleCount;
}

string Ship::getRoute() const
{
	return mRoute;
}

int Ship::getCapacity() const
{
	return mCapacity;
}

int Ship::getContainersCount() const
{
	return mContainersCount;
}

