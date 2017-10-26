#include<iostream>

using namespace std;

class Empty {

};


class DerivedClass_1: public Empty{
	private :
	int var1;
	double var2;
	float var3;
	char var4;
	
};


class DerivedClass: public Empty{
	public :
	int var1;
	double var2;
	float var3;
	char var4;
	
};


class NonEmpty{
	private :
	int var1;
	double var2;
	float var3;
	char var4;
	
};

 		 	// MAIN FUNCTION

int main() {
	
Empty *e1= new Empty;
Empty *e2= new Empty;
if (&e1== &e2)
  cout << "SAME OBJECT" << endl;

  cout << "DERIVED OBJECT" << endl;
  
  			// FIND THE SIZE OF THE OBJECT WHEN THE CLASS IS EMPTY ;
  			
int sizeOfobject =  sizeof(e1);
cout << sizeOfobject << endl;

          // 	FIND THE SIZE OF THE OBJECT WHEN THE CLASS IS NOT EMPTY  AND DERIVED CONTAIN PUBLIC DATA TYPES;
          
DerivedClass derivedClass;
int sizeOfDerivedClass =sizeof(derivedClass);
cout << "THE SIZE OD DERIVED CLASS OBJECT IS  " << sizeOfDerivedClass << endl;
		    
		// 	FIND THE SIZE OF THE OBJECT WHEN THE CLASS IS NOT EMPTY  AND DERIVED CONTAIN PRIVATE DATA TYPES;
                  
DerivedClass_1 derivedClass1 ;
int sizeOfDerivedClass_1 =sizeof(derivedClass1);
cout << "THE SIZE OD DERIVED CLASS OBJECT IS  " << sizeOfDerivedClass_1 << endl;
	
       // 	FIND THE SIZE OF THE OBJECT WHEN THE CLASS IS NOT EMPTY CONTAIN PUBLIC DATA TYPES;
          
NonEmpty nonempty ;
int sizeOfNonEmptyClass =sizeof(nonempty);
cout << "THE SIZE OD DERIVED CLASS OBJECT IS  " << sizeOfDerivedClass << endl;
	            
          
return 0;     
}
