#include<iostream>
using namespace std;

class Base {
public:
    Base()
    {
        cout << "Base class constructor " << endl;
    }
	virtual void show() { cout<<" In Base \n"; }
};

class Derived: public Base {
public:
	Derived(){
	    cout << "Derived class constructor"<< endl;
	}
	void show() { cout<<"In Derived \n"; } 
	
};

int main(void) { 
	Base *bp = new Derived;	//call both base and derived class pointer 
	Base *bpp=new Base;//only base class pointer will be called
	Derived *Drr= new Derived;//both base and derived class pointer will be called
    Derived object;//both class pointer will be called
	bpp->show();//Base class Function Will Be called 
	//Derived *Dr= new Base;// can not assigned derived class pointer to base class 
	//Dr->show();
	bp->show(); // RUN-TIME POLYMORPHISM
	Drr->show();// derived class function will be called
	object.show();// not using this pointer
	return 0;
}
