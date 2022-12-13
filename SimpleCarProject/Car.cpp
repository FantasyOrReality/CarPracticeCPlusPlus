//Include default libraries
#include <iostream>

//Include custom classes
#include "Car.h"



Car::Car():
	Vehicle()
	, Racecar(false)
{
	std::cout << "Car was constructed" << std::endl;

}

Car::Car(bool newRacecar) :
	Racecar(newRacecar)
{
}

Car::~Car()
{
	std::cout << "Car was destructed" << std::endl;
}

std::string Car::GetVehicleTypeName()
{
	std::string type = "Car";
	return type;
}




