#pragma once

#include "Car.h"
class ParkingSpace
{
public:

	ParkingSpace();
	void Exit();
	void Print();

	void Park(Car NewCar1);



	Car Car1;
	bool Parked;


};

