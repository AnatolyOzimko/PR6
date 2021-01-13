#include "TrainV1.h"

TrainV1::TrainV1()
{
	ID = 0;
	destination = "";
	number = 1;
	departureTime = "00:00";
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

TrainV1::TrainV1(int aID)
{
	ID = aID;
	destination = "";
	number = 1;
	departureTime = "00:00";
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

void TrainV1::setDestination(std::string aDest)
{
	destination = aDest;
}

void TrainV1::setNumber(int aNum)
{
	number = aNum;
}

void TrainV1::setDepartureTime(std::string aDepTime)
{
	departureTime = aDepTime;
}

void TrainV1::setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux)
{
	NOP_common = aNOP_common;
	NOP_compartment = aNOP_compartment;
	NOP_reservedSeat = aNOP_reservedSeat;
	NOP_lux = aNOP_lux;
}

std::string TrainV1::getDestination()
{
	return destination;
}

int TrainV1::getNumber()
{
	return number;
}

std::string TrainV1::getDepartureTime()
{
	return departureTime;
}

void TrainV1::getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux)
{
	aNOP_common = NOP_common;
	aNOP_compartment = NOP_compartment;
	aNOP_reservedSeat = NOP_reservedSeat;
	aNOP_lux = NOP_lux;
}

TrainV1::~TrainV1()
{

}

std::ostream& operator<<(std::ostream& aOut, const TrainV1& aTrainV1)
{
	aOut << "TrainV1(" << aTrainV1.ID << ", " << aTrainV1.destination << ", " << aTrainV1.number << ", " << aTrainV1.departureTime << ", " << aTrainV1.NOP_common << ", " << aTrainV1.NOP_compartment << ", " << aTrainV1.NOP_reservedSeat << ", " << aTrainV1.NOP_lux << ")";

	return aOut;
}

std::istream& operator>>(std::istream& aIn, TrainV1& aTrainV1)
{
	std::cout << "ID: ";
	aIn >> aTrainV1.ID;
	std::cout << "destination: ";
	aIn >> aTrainV1.destination;
	std::cout << "number: ";
	aIn >> aTrainV1.number;
	std::cout << "NOP_common: ";
	aIn >> aTrainV1.NOP_common;
	std::cout << "NOP_compartment: ";
	aIn >> aTrainV1.NOP_compartment;
	std::cout << "NOP_reservedSeat: ";
	aIn >> aTrainV1.NOP_reservedSeat;
	std::cout << "NOP_lux: ";
	aIn >> aTrainV1.NOP_lux;

	return aIn;
}

bool operator==(const TrainV1& aTrainV11, const TrainV1 aTrainV12)
{
	bool res =
		aTrainV11.ID == aTrainV12.ID &&
		aTrainV11.destination == aTrainV12.destination &&
		aTrainV11.number == aTrainV12.number && 
		aTrainV11.departureTime == aTrainV12.departureTime &&
		aTrainV11.NOP_common == aTrainV12.NOP_common &&
		aTrainV11.NOP_compartment == aTrainV12.NOP_compartment &&
		aTrainV11.NOP_reservedSeat == aTrainV12.NOP_reservedSeat &&
		aTrainV11.NOP_lux == aTrainV12.NOP_lux;

	return res;
}
