#include<iostream>

using namespace std;

          
int main(){
typedef int  Integer;
typedef int* IntPtr;
Integer x;
x=5;
IntPtr y = &x;
cout << "SIZE OF INTEGER " << sizeof(x) << endl;
cout << "VALUE OF X IS :" << x << endl;
cout << "ADDRESS OF Y IS :" << y << endl;
return 0;
}
