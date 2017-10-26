
#include <iostream>

using namespace std;

class Base{

public:
int var1;
virtual int fun() =0;
    
};

class Derived : public Base{
 
 public:
 int fun(){
 
     cout << "DERIVED CLASS FUNCTION " << endl;
     
     }
 };
  
 int main(){
 //Base base ;**ERROR CAN NOT CREATE THE OBJECT OF ABSTRACT CLASS 
 //base.fun();
 
 Derived  derived ;
 derived.fun();
 
 return 0;
 }  
  
    


