#pragma once
#include "Vehicle.h"
class Motorcycle :
    public Vehicle
{
    //make public
public:
    //Functions
    //Constructor
    Motorcycle();
    Motorcycle(std::string newName, Owner* newOwner, std::string newMake, std::string newModel, int newDoors, float newMileage, float newMPG, float newPetrol, int newNumWheels, bool newSecretlyATransformer, float newFillLevel, bool NewRacebike);

    //Destructor
    ~Motorcycle();

    //Getters
    std::string GetVehicleTypeName();

    //make protected
protected:

    //make private
private:
    //Data
    bool Racebike;

};

