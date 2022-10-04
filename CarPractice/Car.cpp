#include "Car.h"
#include <iostream>


Car::IntroduceCar(std::string NewMake, std::string NewModel, float NewDoors, float NewMileage, float NewMPG, float NewPetrol):
	Make(NewMake),
	Model(NewModel),
	Doors(NewDoors),
	Mileage(NewMileage),
	MPG(NewMPG),
	Petrol(NewPetrol)
{
	std::cout << "Car constructed using parameters!" << std::endl;
}

