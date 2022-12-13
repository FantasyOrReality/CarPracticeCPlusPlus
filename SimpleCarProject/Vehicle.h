#pragma once
//Include pragma
#pragma once

//Include default libraries
#include<string>

//Foward declarations
class Owner;

//Declare class
class Vehicle
{
	//Make the functions public
public:
	//Declare functions
	//Constructor
	Vehicle();
	Vehicle(std::string newName, Owner* newOwner, std::string newMake, std::string newModel, int newDoors, float newMileage, float newMPG, float newPetrol, int newNumWheels, bool newSecretlyATransformer, float newFillLevel);

	//Destructor
	virtual ~Vehicle();

	//Getters
	int GetNumWheels();
	std::string GetName();
	float GetPetrolLevel();
	virtual std::string GetVehicleTypeName() = 0;

	//Setters
	void SetOwner(Owner* SetterOwner);
	void Setname(std::string SetterName);
	void SetPetrol();
	void SetAddedPetrol(float newPetrol);

	//Regular functions
	void Print();

	

	//Make the variables protected
protected:
	//Declare variables, pointers and references
	std::string Name;
	Owner* owner;
	std::string Make;
	std::string Model;
	int Doors;
	float Mileage;
	float MPG;
	float Petrol;
	int NumWheels;
	bool SecretlyATransformer;
	float FillLevel;
	//Make the variables private
private:


};

