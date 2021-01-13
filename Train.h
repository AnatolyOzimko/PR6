#pragma once
#include <string>
#include <sstream>
#include "Plain.h"
#include "Transport.h"
#include "myException.h";

class Train: public Transport 
{
private:
	int NOP_common, NOP_compartment, NOP_reservedSeat, NOP_lux;
public:
	Train();
	Train(int aID);
	void setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux);
	void getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux);
	virtual void saveToFile(std::string apathToFile);
	virtual void loadFromFile(std::string apathToFile);
	~Train();
};

