#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip> 


using namespace std;

enum car_purpose {buisness, leisure, delivery, hobby}; // so ... it assigns a number to each ... variable in the brackets? 

struct car {

   string model;
   int age; 
   unsigned char purpose;

}; // semicolon after defining a structure! 



int main() {


car my_car; 

my_car.age = 5; 
my_car.model = "SomeModel";
my_car.purpose = leisure;

cout << my_car.model << "is a type " << (int) my_car.purpose << " car." << endl;
cout << my_car.model << " is " << my_car.age << " years old." << endl;


return (0);
}

