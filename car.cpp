#include "car.h"

using namespace std;

void Car:: SetModel(string model)
{
   this -> model = model;
}

void Car:: SetAge(int age)
{
    this -> age = age;
}


void Car::SetPurpose(unsigned char purpose)
{
   this -> purpose = purpose; 
}

string Car::GetModel() 
{
    return model;
}


int Car::GetAge() 
{
    return age;
}

unsigned char Car::GetPurpose() 
{
  return purpose;
}

