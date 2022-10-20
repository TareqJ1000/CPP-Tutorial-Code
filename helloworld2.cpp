/* When you want to use certain functions, you need to include the
 * header files for it first. It contains the function definitions.
 * Here iostream defines what you need for Input/Output to the console.
 */


/* The type casting is done implicitly*/


#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip> 



using namespace std;  // Avoid needing to include std:: everywhere

const int LENGTH1 = 25; 
char arrayStr1[LENGTH1] = "Hi everyone! ";
char arrayStr2[] = "How are you?";


string stdStr1 = "Hello!";
string stdStr2 = "How's it been?";

int a, b = 5;
float flt = -7.44f;
int32_t sgn; 
uint32_t unsgn;

const int AGE_LENGTH = 4;
int age[AGE_LENGTH];


int TestOne ()
{ /* Type casting */ 
/* The type casting is done implicitly*/
sgn = flt; 
unsgn = sgn;
cout << "Float: " << flt << endl;
cout << "int32: " << sgn << endl;
cout << "unint32: " << unsgn << endl;

int fahrenheit = 100;
int celcius; 

celcius = float((5/9.0)) * (fahrenheit - 32); // wait! Isn't 5/9 a fraction? By default, we treat every term as an integer, so 5/9 reounds down to zero. That is to say that casting to int keeps the whole part, not the fractional part
// We could have also done 5.0/9
cout << endl;
cout << "Fahrenheit: " << fahrenheit << endl;
cout << "Celcius: " << celcius << endl;
return 0;
}


// *************************************************

// Fun with arrays. we may explore vectors later on, which are easier to work with than arrays. 

int TestTwo (){ 

    age[0] = 25;
    age[1] = 20;
    age[2] = 19; 
    age[3] = 19; 

    cout << "The age array has " << AGE_LENGTH << " elements" <<endl;
    cout << "first age: " << age[0] << endl;

    return 0;
}

// *************************************************

int TestThree () // Conditionals!
{
    int age;
    cout << "Welcome to the Pub and Grille! \n";
    cout << "Please enter your age \n";
    cin >> age; // Note that the arrows have shifted direction here

    if (age >= 19)
    { 
        cout << "Have a beer, mate. Life's tough.";
    }

    else if (age >= 16) {
        cout << "This place isn't for you ... kid. Enjoy the wonders of life before it gets ugly. \n ";
        cout << "Oh, and you can drive! \n";
    }

    else {
        cout << "Have some chocolate milk ... and stay outside, young one.";
    }

    return 0; 
}

// *************************************************

int TestFour () // Loops!
{

cout << "For loop \n";
for (int i=0; i < 10; i++)
{
    cout << i << endl; 
}

cout << "While loop" << endl;
int i=0;
while(i<10) {
 cout << i << endl;
 i++; 
}

 return 0; 
}

// *************************************************

int TestFive () // Switch cases 
{
int a;
int b;
char operation;
int result;


cout << "Enter first operand: " << endl;
cin >> a;
cout << "Enter second operand: " << endl;
cin >> b; 
cout << "What operation would you like to perform?" << endl; 
cin >> operation;

switch(operation){
case '+':
 result = a + b;
 break;
case '-':
 result = a - b;
 break;
case '*':
 result = a*b;
 break; 
case '/':
 result = a/b;
 break; 
default:
 result = a+b;
 break;
}
cout << "Result is " << result << endl;
return 0;
}

void PrintHello(); // 'Function prototype'. We  usually create the prototype above the main function, then define it below. 
void PrintNumber(int a); 
int GiveMe10();
int AddThese(int num1, int num2);
/********/
void ValueChanged1(int someNum);
void ValueChanged2(int& someNum); // the amperstand indicates that we are passing by reference
/*******/
void SomeFunction(int aParam);
double myGlobalDouble = 3.14159;
/*******/
void PrintFormatted(ofstream& outputFile, int maxLoop);

/***/

// This is the main function. It is always executed first.

int main() {
int maxLoop;
ofstream outfile; // ofstream is a built-in class in C++. You cannot change the name of this. 

cout << "Writing to file" << endl;
outfile.open("output.txt");

outfile << fixed << showpoint;
cout << " Select a hard-coded value" << endl;
cin >> maxLoop; 

PrintFormatted(outfile, maxLoop);

outfile.close(); // It's a good practice to always close your session when you're done with it
cout << "Done." << endl;
return 0;
}

void printHello(){
cout << "HELLO THERE" ;
}

void PrintNumber(int a){
cout << "The number is " << a << endl; 
}

int GiveMe10() {
    return 10;
}

int AddThese(int num1, int num2){
    return num1 + num2;
}

void ValueChanged1(int someNum) // note that changes to the parameter that we pass does not actually change the value of the original value
{
someNum = 100; 
cout << "SomeNum in ValueChanged1() is: " << someNum << endl;
}

void ValueChanged2(int& someNum)
{
someNum = 100; 
cout << "SomeNum in ValueChanged1() is: " << someNum << endl;
}

void SomeFunction(int aParam) {
    int myLocalNum = 100;

    cout << "my local num is: " << myLocalNum << endl; 
    cout << "The Parameter is: " << aParam << endl;
    cout << "My global double is: " << myGlobalDouble << endl;
}

void PrintFormatted(ofstream& outputFile, int maxLoop) {
for (int i=1; i < maxLoop; i++)
{
    outputFile << setw(12) << setprecision(2) << (i*5.75) << setw(12) << setprecision(3) << (i*3.14159) << endl; // setw seems to be adding a horizontal space?  
    cout << setw(12) << setprecision(2) << (i*5.75) << setw(12) << setprecision(3) << (i*3.14159) << endl; // we expect to see the same thing being displayed in the out file
}
}
