// C++ program to demonstrate use of decltype
#include<iostream>
#include<typeinfo>
using namespace std;

void fun1() { return ; }
char fun2() { return 'g'; }
int fun3(){return 9;}
int main()
{
	// Data type of x is same as return type of fun1()
	// and type of y is same as return type of fun2()
	//decltype(fun1()) x;**ERROR VARAIABLE CAN NOT BE DECLARE AS VOID 
	decltype(fun2()) y;
    decltype(fun3()) z;
	//cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
	return 0;
}
