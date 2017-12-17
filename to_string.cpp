#include<iostream>
#include<string>
using namespace std;
int main(){
	int intVar=123;
	float floatVar=2.3;
	string intString=to_string(intVar);
	string floatString=to_string(floatVar);
	cout << "string value of integer is "<< intString<< endl;
	cout << "STring value of float is "<< floatString<< endl;
return 0;
}
