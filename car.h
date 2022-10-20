#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip> 

using namespace std;


class Car {

 public:
    void SetModel (string model);
    
    void SetAge (int age);
    
    void SetPurpose(unsigned char purpose);
    
    string GetModel();  // const treats the var below as READ ONLY
  
    int GetAge(); 
   
    unsigned char GetPurpose(); 

 private:
        string model;
        int age; 
        unsigned char purpose; 

};

