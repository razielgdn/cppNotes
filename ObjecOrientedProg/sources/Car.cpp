#include <iostream>
#include "Car.h"

Car::Car(){
std::cout << "car()" << std::endl;
   
}
Car::Car(float amount){
   this->fuel = amount;   
}
void Car::Accelerate()
{
  this->speed++;
  this->fuel -= 0.5f;
}

void Car::Brake()
{
   speed = 0;
}

void Car::FillFuel( float amount)
{
   fuel = amount;
}

void Car::AddPassengers(int passengers)
{
   this->passengers = passengers ;
}

void Car::Dashboard ()
{
   std:: cout << "fuel level: "<< fuel << std::endl;
   std:: cout << "speed: "<< speed << std::endl;
   std:: cout << "Passengers: "<< passengers << std::endl;
}
Car::~Car (){

}

