#include "Truck.h"

Truck::Truck() :
	Vehicle(),
	BedSize(0)
	, BedContents()
{
	std::cout << "Truck was constructed" << std::endl;

}

Truck::Truck(float NewBedSize, std::vector<std::string> NewBedContents):
	BedSize(NewBedSize)
	, BedContents(NewBedContents)
{

}



std::vector<std::string> Truck::GetBedContents()
{
	return BedContents;
}

std::string Truck::GetVehicleTypeName()
{
	std::string type = "Truck";
	return type;
}

void Truck::SetBedContents(std::vector<std::string> SetterBedContents)
{
	//Set the contents with VectorName.pushback()
}

void Truck::TruckPrint()
{
	//Initiate the vehicle print function
	

	//Print the bedContents

}

Truck::~Truck()
{
	std::cout << "Truck was destructed" << std::endl;

}