// CarPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

void PrintCars(Car CarStats)
{
	std::cout << "The car's make is " << CarStats.Make << std::endl
		<< ". The car's model is " << CarStats.Model << std::endl
		<< ". The car has " << CarStats.Doors << " doors." << std::endl
		<< " The car's mileage is " << CarStats.Mileage << std::endl
		<< ". The car's MPG is " << CarStats.MPG << std::endl
		<< ". The car has " << CarStats.Petrol << " gallons of petrol in it." << std::endl
		<< std::endl;
}

int main()
{
	Car McQueen;
	Car Mater;
	Car Doc;

	McQueen.Make = "Chevrolet";
	McQueen.Model = "Corvette C6";
	McQueen.Doors = 2;
	McQueen.Mileage = 100000.0;
	McQueen.MPG = 100.0;
	McQueen.Petrol = 100.0;

	Mater.Make = "International Harvest";
	Mater.Model = "Tow Truck";
	Mater.Doors = 2;
	Mater.Mileage = 500.0;
	Mater.MPG = 50.0;
	Mater.Petrol = 50.0;

	Doc.Make = "Hudson";
	Doc.Model = "Hornet";
	Doc.Doors = 4;
	Doc.Mileage = 500000.0;
	Doc.MPG = 200.0;
	Doc.Petrol = 200.0;

	PrintCars(McQueen);
	PrintCars(Mater);
	PrintCars(Doc);


}

