// Another C++ program to demonstrate use of decltype
#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
int x = 5;

// j will be of type int : data type of x
decltype(x) j = x + 5;
cout << typeid(j).name()<< endl;
auto i =0;
for(;i<10;i++)
  cout << i << " "<< endl;
cout << typeid(i).name();

return 0;
}
