// SimpleCarProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Include default libraries
#include <iostream>
#include <string>

//Include custom classes
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Owner.h"


//Main function
int main()
{
    //Declare Owner variables
    Truck Truck1;
    Truck* Truckptr = &Truck1;

    Car Car1;
    Car* Carptr = &Car1;

    Motorcycle Bike1;
    Motorcycle* Bikeptr = &Bike1;

    Owner driver1 = Owner("Dude", Carptr);
    Owner driver2 = Owner("Creature", Truckptr);
    Owner driver3 = Owner("Lassie", Bikeptr);

    Truckptr->Setname("Truck");
    Carptr->Setname("Car");
    Bikeptr->Setname("Bike");

    Truckptr->SetPetrol();
    Carptr->SetAddedPetrol(50.0f);
    Bikeptr->SetAddedPetrol(150.0f);

    driver1.RegisterVehicle(Carptr);
    driver2.RegisterVehicle(Truckptr);
    driver3.RegisterVehicle(Bikeptr);


    std::cout << "The truck's current petrol level is " << Truckptr->GetPetrolLevel() << std::endl;
    std::cout << "The car's current petrol level is " << Carptr->GetPetrolLevel() << std::endl;
    std::cout << "The bike's current petrol level is " << Bikeptr->GetPetrolLevel() << std::endl;

    //Check for null
    
    //Declare Car variables and pointers
    //Car car1("The ol' Wagon", &driver1);
    //Car& car2 = car1;

    

    //Assign driver 1's currently owned car
    //driver1.SetCurrentCar(&car1);

/*
    std::cout << car1.owner.Name << std::endl;
    std::cout << car1.Name << std::endl;

    std::cout << &driver1 << std::endl;
    */

    //Run functions
    driver1.PrintOwnerAndCar(); //Printing the name of driver 1 and the name of driver 1's current vehicle
    driver2.PrintOwnerAndCar(); //Printing the name of driver 2 and the name of driver 2's current vehicle
    driver3.PrintOwnerAndCar(); //Printing the name of driver 3 and the name of driver 3's current vehicle


}


