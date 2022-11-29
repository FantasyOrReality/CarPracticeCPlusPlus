#include "Car.h"
#include <iostream>


Car::Car()
	:

	SerialNumber(""),
	Make(""),
	Model(""),
	Doors(0),
	Mileage(0.0f),
	MPG(0.0f),
	Petrol(0.0f)
{

}

Car::Car(std::string NewSerialNumber, std::string NewMake, std::string NewModel, int NewDoors, float NewMileage, float NewMPG, float NewPetrol)
	:
	SerialNumber(NewSerialNumber),
	Make(NewMake),
	Model(NewModel),
	Doors(NewDoors),
	Mileage(NewMileage),
	MPG(NewMPG),
	Petrol(NewPetrol)
{
	std::cout << "Car constructed using parameters!" << std::endl;
}

