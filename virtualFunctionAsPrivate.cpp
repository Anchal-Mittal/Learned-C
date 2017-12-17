#include<iostream>
using namespace std;

class Base{
	private:
	virtual void fun(){
	  cout << "BASE CLASS "<< endl;
	}
	friend int main();
};

class Derived :public Base{
	public:
	 void fun(){
		cout << "DERIVED CLASS " << endl;
	 }
};

int main(){
  	Base *ptr = new Derived;
    ptr->fun();
  	Derived dobject;
	  dobject.fun();
return 0;
}
/* output 
  DERIVED CLASS
  DERIVED CLASS
*/
