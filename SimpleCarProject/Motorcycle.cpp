#include <iostream>

#include "Motorcycle.h"

Motorcycle::Motorcycle():
	Vehicle("", nullptr, "", "", 0, 0.0f, 0.0f, 0.0f, 0, false, 0.0f),
	Racebike(false)
{
	std::cout << "Motorcycle was constructed" << std::endl;

}

Motorcycle::Motorcycle(std::string newName, Owner* newOwner, std::string newMake, std::string newModel, int newDoors, float newMileage, float newMPG, float newPetrol, int newNumWheels, bool newSecretlyATransformer, float newFillLevel, bool NewRacebike)
	: Vehicle(newName, newOwner, newMake, newModel, newDoors, newMileage, newMPG, newPetrol, newNumWheels, newSecretlyATransformer, newFillLevel)
	, Racebike(NewRacebike)
{
}

Motorcycle::~Motorcycle()
{
	std::cout << "Motorcycle was destructed" << std::endl;

}

std::string Motorcycle::GetVehicleTypeName()
{
	std::string type = "Motorcycle";
	return type;
}
