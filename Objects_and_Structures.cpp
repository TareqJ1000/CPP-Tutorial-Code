#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip> 


using namespace std;

enum car_purpose {buisness, leisure, delivery, hobby}; // so ... it assigns a number to each ... variable in the brackets? We can assign up to 1023 values to different purposes (though it is compiler dependent)



class House {

  public:  // accessible outside the class
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
       return this -> numStories;
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

struct car {

   string model;
   int age; 
   unsigned char purpose;

}; // semicolon after defining a structure! 


void ChangePurpose(car& myCar, int newPurpose); // to make global changes on your structual variable, remember to pass the reference 
void Display (car myCar);

int main() {

House myHouse;
House coryHouse; 

myHouse.setNumStories(2);
myHouse.setNumWindow(6); 
myHouse.setColour("red");

cout << "This is my house, bro! It is a " << myHouse.getColour() <<" house. It has " << myHouse.getNumWindow() << " windows and " << myHouse.getNumStories() << " stories." << endl;

return (0);
}

void ChangePurpose(car& myCar, int newPurpose)
{
 myCar.purpose = newPurpose;
}


void Display(car myCar)
{
cout << myCar.model << " is a type " << (int) myCar.purpose << " car." << endl;
cout << myCar.model << " is " << myCar.age << " years old." << endl;
}

