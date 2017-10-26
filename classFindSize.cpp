#include<iostream>

using namespace std;

class Empty {

};


          // DERIVED A CLASS 

class Derived : public Empty {
	int x;
};

         
         // MAIN FUNCTION
         
int main() {
	 
   
          // FIND THE SIZE OF EMPTY CALSS 
	Empty e;
	int sizeOfEmptyClass = sizeof(e);
    cout<< sizeOfEmptyClass << endl;	
    
          // FIND THE SIZE OF DERIVED CLASS 
    
	Derived d;
    int sizeOfDerivedClass = sizeof(d);
	cout << sizeOfDerivedClass << endl;
 
 return 0;     
}
