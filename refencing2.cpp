#include<iostream>
using namespace std;

int &fun()
{
	static int x = 10;
	return x;
}
int fun2()
{
	static int x = 10;
	return x;
}
int main()
{
	fun() = 30;// valid
	cout << fun()<< endl;
	fun2()=40;//not valid 
	//cout <<fun2();
	return 0;
}
/* output 
    30
    bcz due to referecing fun() will be called and return 10, but we change the value at that refence by 30 and cout<< fun() will 
    execute, in initial it will search locally and get the value 30
 */
