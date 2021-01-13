#include "Train.h"

Train::Train()
{
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

Train::Train(int aID)
{
	ID = aID;
	NOP_common = 1;
	NOP_compartment = 1;
	NOP_reservedSeat = 1;
	NOP_lux = 1;
}

void Train::setNOP(int aNOP_common, int aNOP_compartment, int aNOP_reservedSeat, int aNOP_lux)
{
	NOP_common = aNOP_common;
	NOP_compartment = aNOP_compartment;
	NOP_reservedSeat = aNOP_reservedSeat;
	NOP_lux = aNOP_lux;
}

void Train::getNOP(int& aNOP_common, int& aNOP_compartment, int& aNOP_reservedSeat, int& aNOP_lux)
{
	aNOP_common = NOP_common;
	aNOP_compartment = NOP_compartment;
	aNOP_reservedSeat = NOP_reservedSeat;
	aNOP_lux = NOP_lux;
}

void Train::saveToFile(std::string apathToFile)
{
	std::ofstream myfile;
	myfile.open(apathToFile);
	if (myfile.is_open()) {
		myfile << "Train" << ", " << this->ID << ", " << this->destination;
		myfile << ", " << this->number << ", " << this->departureTime;
		myfile << ", " << this->NOP_common << ", " << this->NOP_compartment;
		myfile << ", " << this->NOP_reservedSeat << ", " << this->NOP_lux << ";" << std::endl;
		myfile.close();
	}
	else { throw myException("Error open file!\n"); }
}

void Train::loadFromFile(std::string apathToFile)
{
	std::ifstream myfile;
	myfile.open(apathToFile);

	std::string output;

	if (myfile.is_open()) {

		std::string line;
		std::string className, ID, destination, number, departureTime;
		std::string NOP_common, NOP_compartment, NOP_reservedSeat, NOP_lux;


		while (std::getline(myfile, line))
		{
			std::stringstream ss(line);

			std::getline(ss, className, ','); std::cout << className << ", ";
			if (className == "Train") {
			std::getline(ss, ID, ','); this->ID = std::stoi(ID); std::cout << ID << ", ";
			std::getline(ss, destination, ','); this->destination = destination; std::cout << destination << ", ";
			std::getline(ss, number, ','); this->number = std::stoi(number); std::cout << number << ", ";
			std::getline(ss, departureTime, ','); this->departureTime = departureTime; std::cout << departureTime << ", ";

			std::getline(ss, NOP_common, ','); this->NOP_common = std::stoi(NOP_common); std::cout << NOP_common << ", ";
			std::getline(ss, NOP_compartment, ','); this->NOP_compartment = std::stoi(NOP_compartment); std::cout << NOP_compartment << ", ";
			std::getline(ss, NOP_reservedSeat, ','); this->NOP_reservedSeat = std::stoi(NOP_reservedSeat); std::cout << NOP_reservedSeat << ", ";
			std::getline(ss, NOP_lux, ';'); this->NOP_lux = std::stoi(NOP_lux); std::cout << NOP_lux << ", ";
		}
		}
		
	}
	else { throw myException("Error open file!\n"); }
	myfile.close();
}

Train::~Train()
{

}
