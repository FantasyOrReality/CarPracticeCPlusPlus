#include <iostream>
#include <string>

#include "Owner.h"
#include "Vehicle.h"





Owner::Owner():
Name("")
, currentVehicle(nullptr)
{
}

Owner::Owner(std::string newName, Vehicle* newVehicle):
	Name(newName)
	, currentVehicle(newVehicle)
	
{
}

void Owner::PrintOwnerAndCar()
{
	//Check for null on car
	if (currentVehicle != nullptr)
	{
		std::cout << Name <<"'s current car is " << currentVehicle->GetName() << std::endl;
	}

	//if null
	else
	{
		std::cout << Name << " has no vehicles " << std::endl;

	}
}

std::string Owner::GetName()
{
	return Name;
}

void Owner::RegisterVehicle(Vehicle* registerCurrentVehicle)
{
	currentVehicle = registerCurrentVehicle;

	if (currentVehicle != nullptr)
	{
		currentVehicle->Print();
	}

	/* Car* Carptr = dynamic_cast<Car*>(currentVehicle);
	Truck* Truckptr = dynamic_cast<Truck*>(currentVehicle);
	Motorcycle* Bikeptr = dynamic_cast<Motorcycle*>(currentVehicle);
	

	if (Carptr != nullptr)
	{
		Carptr->Print();

	}

	if (Truckptr != nullptr)
	{
		Truckptr->Print();

	}
	if (Bikeptr != nullptr)
	{
		Bikeptr->Print();

	}
	*/
}
