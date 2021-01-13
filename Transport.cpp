#include "Transport.h"

Transport::Transport()
{
	ID = 0;
	destination = "";
	number = 1;
	departureTime = "";
}

Transport::Transport(int aID)
{
	ID = aID;
	destination = "";
	number = 1;
	departureTime = "";
}

void Transport::setDestination(std::string aDest)
{
	destination = aDest;
}

void Transport::setNumber(int aNumber)
{
	number = aNumber;
}

void Transport::setDepartureTime(std::string aDepTime)
{
	departureTime = aDepTime;
}

std::string Transport::getDestination()
{
	return destination;
}

int Transport::getNumber()
{
	return number;
}

std::string Transport::getDepartureTime()
{
	return departureTime;
}

bool Transport::transportStatus(std::string adepartureTime)
{
	if (departureTime == adepartureTime) { return true; }
	else { return false; }
}

void Transport::vTest()
{
	std::cout << "Virtual method test passed!" << std::endl;
}

Transport::~Transport()
{

}

