#include <iostream>
using namespace std;
class Base
{
public:
virtual ~Base()=0; // Pure virtual destructor
};

Base::~Base(){
	cout << "Pure virtual destructor is called";
}

class Derived : public Base
{
public:
     Derived(){
         cout << "Derived class construction"<< endl;
     }
     virtual ~Derived()=0;
};
Derived ::~Derived(){
    cout <<"DERIVED CLASS CONSTRUCTOR"<< endl;
}

int main()
{
	Base *b = new Derived();// ***ERROR ***
	delete b;
	return 0;
}
/* ERROR DERIVED CLASS CAN NOT HAVE PURE VIRTUAL FUNCTION BEACAUSE THERE EXIST NOT ANY OTHER DERIVED CLASS THAT PROMISED 
,OR OVERRIDE ITS DESTRUCTOR
*/
