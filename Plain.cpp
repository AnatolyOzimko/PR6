#include "Plain.h"

Plain::Plain()
{
	ID = 0;
	destination = "";
	number = 1;
	departureTime = "";
}

Plain::Plain(int aID)
{
	ID = aID;
	destination = "";
	number = 1;
	departureTime = "";
}

void Plain::setDestination(std::string aDest)
{
	destination = aDest;
}

void Plain::setNumber(int aNumber)
{
	number = aNumber;
}

void Plain::setDepartureTime(std::string aDepTime)
{
	departureTime = aDepTime;
}

std::string Plain::getDestination()
{
	return destination;
}

int Plain::getNumber()
{
	return number;
}

std::string Plain::getDepartureTime()
{
	return departureTime;
}

Plain::~Plain()
{

}
