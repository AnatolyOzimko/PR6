#pragma once
#include <string>
#include <iostream>

class TrainV1
{
private:
	int ID;
	std::string destination;
	int number;
	std::string departureTime;
	int NOP_common, NOP_compartment, NOP_reservedSeat, NOP_lux;
public:
	TrainV1();
	TrainV1(int aID);
	void setDestination(std::string aDest);
	void setNumber(int aNum);
	void setDepartureTime(std::string aDepTime);
	void setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux);
	std::string getDestination();
	int getNumber();
	std::string getDepartureTime();
	void getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux);
	friend std::ostream& operator<< (std::ostream& aOut, const TrainV1& aTrainV1);
	friend std::istream& operator>> (std::istream& aIn, TrainV1& aTrainV1);
	friend bool operator==(const TrainV1& aTrainV11, const TrainV1 aTrainV12);
	~TrainV1();
};

