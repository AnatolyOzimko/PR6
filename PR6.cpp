
#include <iostream>
#include <string>
#include "Train.h"
#include "TrainV1.h"

int main()
{
    Train train1s;
    Train train2s;

    train1s.setDepartureTime("1:00");
    train1s.setDestination("New York");
    train1s.setNumber(33);
    train1s.setNOP(2, 3, 4, 5);

    train2s.setDepartureTime("2:00");
    train2s.setDestination("Paris");
    train2s.setNumber(44);
    train2s.setNOP(2, 3, 4, 5);

    train1s.saveToFile("Object1.txt");
    train2s.saveToFile("Object2.txt");

    Train train3l;
    Train train4l;

    train3l.loadFromFile("Object1.txt");
    train4l.loadFromFile("Object2.txt");

    Train train1;

    train1.setDepartureTime("12:00");
    train1.setDestination("London");
    train1.setNumber(15);
    train1.setNOP(2, 3, 4, 5);

    int nop1, nop2, nop3, nop4;

    train1.getNOP(nop1, nop2, nop3, nop4);

    std::string str, timestr;

    std::cout << "Please, enter destination: " << std::endl;
    std::cin >> str;

    std::cout << "Please, enter time: " << std::endl;
    std::cin >> timestr;

	if (train1.transportStatus(timestr)) {
		std::cout << "Train available" << std::endl;
	}
	else
	{
		std::cout << "Train is NOT available" << std::endl;
	};

	if (str == train1.getDestination()) {

	std::cout << "Number: " << train1.getNumber() << std::endl;
	std::cout << "Destination: " << train1.getDestination() << std::endl;
	std::cout << "DepartureTime: " << train1.getDepartureTime() << std::endl;
	std::cout << "Nop: " << nop1 << nop2 << nop3 << nop4 << std::endl;
    }
    else {
        std::cout << "No match found" << std::endl;
    }

    Transport* trasnportArray[4];
    std::string className;

    int num;
    std::string departTime, dest;

    for (int i = 0; i < 4; i++)
    {
		std::cout << "Enter class name" << std::endl;
		std::cin >> className;
		if (className == "Train") {
			trasnportArray[i] = new Train;

            std::cout << "DepartureTime: " << std::endl;
            std::cin >> departTime;
            trasnportArray[i]->setDepartureTime(departTime);

            std::cout << "Destination: " << std::endl;
            std::cin >> dest;
            trasnportArray[i]->setDestination(dest);

            std::cout << "Number: " << std::endl;
            std::cin >> num;
            trasnportArray[i]->setNumber(num);
		}
		else { trasnportArray[i] = 0; }

    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Number: " << trasnportArray[i]->getNumber() << std::endl;
        std::cout << "Destination: " << trasnportArray[i]->getDestination() << std::endl;
        std::cout << "DepartureTime: " << trasnportArray[i]->getDepartureTime() << std::endl;
        trasnportArray[i]->vTest();
    }

    
    TrainV1 train2;

    std::cout << "Operator >> test" << std::endl;

    std::cin >> train2;

    std::cout << "Operator << test" << std::endl;

    std::cout << train2 << std::endl;

}

