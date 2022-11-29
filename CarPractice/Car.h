#pragma once

#include <string>
#include <map>

class Car
{
public:

	Car();
	Car(std::string NewSerialNumber, std::string NewMake, std::string NewModel, int NewDoors, float NewMileage, float NewMPG, float NewPetrol);

	std::string SerialNumber;
	std::string Make;
	std::string Model;
	int Doors;
	float Mileage;
	float MPG;
	float Petrol;

};

