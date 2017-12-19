#include<iostream>
using namespace std;

class Base{
	public:
	Base(){
		cout << "BASE CLASS CONSTRUCTOR"<< endl;
	}
	virtual ~Base(){
		cout << "BASE CLASS DESTRUCTOR "<< endl;
	}
};

class Derived :public Base{
	public:
	Derived(){
		cout << "DERIVED CLASS CONSTRUCTOR "<< endl;
	}
	~Derived(){
		cout << "DERIVED CLASS DESTRUCTOR "<< endl;
	}
};

int main(){
	Base *b=new Derived();
	delete b;
return 0;
}
/*
Output:
BASE CLASS CONSTRUCTOR
DERIVED CLASS CONSTRUCTOR 
DERIVED CLASS DESTRUCTOR 
BASE CLASS DESTRUCTOR 
*/
