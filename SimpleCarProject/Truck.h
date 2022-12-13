#pragma once
//include default libraries
#include <string>
#include <vector>
#include <iostream>

//include custom classes
#include "Vehicle.h" //Deriving from

class Truck :
    public Vehicle
{
    //make public
public:
    //Functions
    //Constructor
    Truck();
    Truck(float NewBedSize, std::vector<std::string> NewBedContents);

    //Destructor
    ~Truck();

    //Getters
    std::vector<std::string> GetBedContents();
    std::string GetVehicleTypeName();

    //Setters
    void SetBedContents(std::vector<std::string> SetterBedContents);

    //General Functions
    void TruckPrint();


    //make protected
protected:

    //make private
private:
    float BedSize;
    std::vector<std::string> BedContents;


};

