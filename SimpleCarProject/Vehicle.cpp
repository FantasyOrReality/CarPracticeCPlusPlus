
//Include default libraries
#include <iostream>

//Include custom classes
#include "Vehicle.h"

Vehicle::Vehicle() 
: Name("")
, owner(nullptr)
, Make("")
, Model("")
, Doors(0)
, Mileage(0.0f)
, MPG(0.0f)
, Petrol(0.0f)
, NumWheels(0)
, SecretlyATransformer(false)
, FillLevel(100)
{
	std::cout << "Vehicle was constructed" << std::endl;

}

Vehicle::Vehicle(std::string newName, Owner* newOwner, std::string newMake, std::string newModel, int newDoors, float newMileage, float newMPG, float newPetrol, int newNumWheels, bool newSecretlyATransformer, float newFillLevel) 
	//Default constructor with parameters
	: Name(newName)
	, owner(newOwner)
	, Make(newMake)
	, Model(newModel)
	, Doors(newDoors)
	, Mileage(newMileage)
	, MPG(newMPG)
	, Petrol(newPetrol)
	, NumWheels(newNumWheels)
	, SecretlyATransformer(newSecretlyATransformer)
	, FillLevel(newFillLevel)
{
	//Print to console
	std::cout << &newOwner << std::endl;

}



std::string Vehicle::GetName()
{
	return Name;
}

float Vehicle::GetPetrolLevel()
{
	return Petrol;
}

int Vehicle::GetNumWheels()
{

	return NumWheels;
}

void Vehicle::SetOwner(Owner* SetterOwner)
{
	owner = SetterOwner;

}

void Vehicle::Setname(std::string SetterName)
{
	Name = SetterName;
}

void Vehicle::SetPetrol()
{
	Petrol = 100.0f;
}

void Vehicle::SetAddedPetrol(float newFillLevel)
{
	Petrol += newFillLevel;

	if (Petrol > 100.0f)
	{
		Petrol = 100.0f;
	}
	else if (Petrol < 0.0f)
	{
		Petrol = 0.0f;
	}

}

void Vehicle::Print()
{
	std::cout << "This "<< GetVehicleTypeName() << "'s name is " << GetName() << "." << std::endl;
	std::cout << "It's make is " << Make << std::endl;
	std::cout << "It's model is" << Model << std::endl;
	std::cout << "It has " << Doors << " doors." << std::endl;
	std::cout << "It has a mileage of " << Mileage << std::endl;
	std::cout << "The MPG is " << MPG << std::endl;
	std::cout << "It's current fill level is " << GetPetrolLevel() << std::endl;
	std::cout << "It has " << GetNumWheels() << " wheels" << std::endl;
	if (SecretlyATransformer == true)
	{
		std::cout << "It is 100% a transformer." << std::endl;

	}

}


Vehicle::~Vehicle()
{
	std::cout << "Vehicle was destructed" << std::endl;

}