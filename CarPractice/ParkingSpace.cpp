#include "ParkingSpace.h"
#include <iostream>

ParkingSpace::ParkingSpace()
	:
	Car1(),
	Parked(false)
{

}

void ParkingSpace::Exit()
{
	Parked = false;
}

void ParkingSpace::Print()
{
	if (Parked == true)
	{
		std::cout << Car1.SerialNumber << " is parked.";
	}
	else
	{
		std::cout << Car1.SerialNumber << " is not parked.";

	}
}

void ParkingSpace::Park(Car NewCar1)

{
	Car1 = NewCar1;
	Parked = true;
}
