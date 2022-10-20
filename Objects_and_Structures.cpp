#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip> 


using namespace std;

enum car_purpose {buisness, leisure, delivery, hobby}; // so ... it assigns a number to each ... variable in the brackets? We can assign up to 1023 values to different purposes (though it is compiler dependent)

struct car {

   string model;
   int age; 
   unsigned char purpose;

}; // semicolon after defining a structure! 


void ChangePurpose(car& myCar, int newPurpose); // to make global changes on your structual variable, remember to pass the reference 
void Display (car myCar);

int main() {

car my_car; 

my_car.age = 5; 
my_car.model = "SomeModel";
my_car.purpose = leisure; // we can also change the purpose of the char by typing in its corresponding integer

Display(my_car);
ChangePurpose(my_car, 4);
Display(my_car);


cout << my_car.model << "is a type " << (int) my_car.purpose << " car." << endl;

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

