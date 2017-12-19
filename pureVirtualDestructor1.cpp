#include <iostream>
using namespace std;
class Base
{
public:
	virtual ~Base()=0; // Pure virtual destructor
};

Base ::~Base(){
    cout << "pure virtual destructor" << endl;
}
class Derived : public Base
{
public:
	~Derived()
	{
		cout << "~Derived() is executed"<< endl;
	}
};

int main()
{
	Base *b=new Derived();
	delete b;
	return 0;
}
/*Output: 
~Derived() is executed
pure virtual destructor
 
Reason:
Pure virtual destructor are legal in standard C++ and one of the most important thing is that if class contains
pure virtual destructor it is must to provide a function body for the pure virtual destructor. This seems strange 
that how a virtual function is pure if it requires a function body? But destructors are always called in the reverse
order of the class derivation. That means derived class destructor will be invoked first & then base class destructor
will be called. 
*/

