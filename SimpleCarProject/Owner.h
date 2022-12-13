#pragma once

#include <string>

class Vehicle;
class Car;
class Motorcycle;
class Truck;

class Owner
{
	//Make the functions public
public:
	//Declare functions
	Owner();
	Owner(std::string newName, Vehicle* newVehicle);
	virtual void PrintOwnerAndCar();

	//Getters
	std::string GetName();

	//Setters
	//General functions
	void RegisterVehicle(Vehicle* registerCurrentVehicle);

	//Make the variables protected 
protected:
	//Pointers
	Vehicle* currentVehicle;

	//Make the variables private
private:
	

	std::string Name;


};

