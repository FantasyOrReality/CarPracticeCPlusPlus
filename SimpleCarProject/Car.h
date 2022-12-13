//Include pragma
#pragma once

//Include default libraries
#include<string>

//Include custom classes
#include "Vehicle.h"

//Declare class
class Car : public Vehicle
{
	//Make the functions public
public: 
	//Declare functions
	//Constructor
	Car();
	Car(bool newRacecar);

	//Destructor
	~Car();

	//Getters
	std::string GetVehicleTypeName();

	//Setters


	//Make the variables protected
protected:



	//Make the variables private
private:
	//Declare variables, pointers and references
	bool Racecar;

};

