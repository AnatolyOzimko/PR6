#pragma once
#include <string>

class Plain
{
protected:
	int ID;
	std::string destination;
	int number;
	std::string departureTime;
public:
	Plain();
	Plain(int aID);
	void setDestination(std::string aDest);
	void setNumber(int aNumber);
	void setDepartureTime(std::string aDepTime);
	std::string getDestination();
	int getNumber();
	std::string getDepartureTime();
	~Plain();
};

