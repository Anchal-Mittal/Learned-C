// C++ program to demonstrate use of decltype in functions
#include <iostream>
#include<typeinfo>
using namespace std;

// A generic function which finds minimum of two values
// return type is type of variable which is minimum
template<class A, class B>
auto findMax(A a, B b) -> decltype(a < b ? b : a)
{
    cout << typeid(a).name()<< endl;
    cout << typeid(b).name()<< endl;
    return (a < b) ? b: a;
}

// driver function to test various inference
int main()
{
	// This call returns 3.44 of doubale type
	cout << findMax(4, 3.44) << endl;
	cout <<typeid(findMax(4,3.44)).name() << endl;

	// This call returns 3 of int type
	cout << findMax(5.4, 3) << endl;
	cout <<typeid(findMax(5.4,3.44)).name() << endl;

	return 0;
}
