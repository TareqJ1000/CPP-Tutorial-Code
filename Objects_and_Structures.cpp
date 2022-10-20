#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip> 
#include "car.h"


using namespace std;

enum car_purpose {buisness, leisure, delivery, hobby}; // so ... it assigns a number to each ... variable in the brackets? We can assign up to 1023 values to different purposes (though it is compiler dependent)

class House {

  public:  // accessible outside the class

  // function within classes are referred to as function members or methods 

    void setNumStories (int numStories)
    {
       this -> numStories = numStories;
    }
    void setNumWindow (int numWindow)
    {
       this -> numWindow = numWindow;
    }
    void setColour(string colour)
    {
       this -> colour = colour;
    }
    int getNumStories () const // const treats the var below as READ ONLY
    {
       return this -> numStories; // this -> is a pointer. Same thing as this.something in java or self.something in python 
    }
    int getNumWindow() const
    {
       return this -> numWindow;
    }
    string getColour () const
    {
       return this -> colour;
    }

private: // not directly accessible
    int numStories; 
    int numWindow;
    string colour;

}; // semicolon after defining a class! 

struct car2 {

   string model;
   int age; 
   unsigned char purpose;

}; // semicolon after defining a structure! 


void ChangePurpose(car2& myCar, int newPurpose); // to make global changes on your structual variable, remember to pass the reference 
void Display (car2 myCar);
void PrintHouseData(House myHouse);

int main() {
Car myCar;

myCar.SetModel("Soem Model");
myCar.SetAge(5);
myCar.SetPurpose(hobby);


return 0;
}

void ChangePurpose(car2& myCar, int newPurpose)
{
 myCar.purpose = newPurpose;
}


void Display(Car myCar)
{
cout << myCar.GetModel() << " is a type " << (int) myCar.GetPurpose() << " car." << endl;
cout << myCar.GetModel() << " is " << myCar.GetAge() << " years old." << endl;
}

void PrintHouseData(House myHouse) {
cout << "This is my house, bro! It is a " << myHouse.getColour() <<" house. It has " << myHouse.getNumWindow() << " windows and " << myHouse.getNumStories() << " stories." << endl;
}

