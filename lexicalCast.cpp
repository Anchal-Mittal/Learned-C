#include<iostream>
#include<boost/lexical_cast.hpp>
#include<cstring>
int main(){
	string str1="123";
	string str2= "4.5";
	int floatVar=boost::lexical_cast<float>(str2);
	int intVar=boost::lexical_cast<int>(str1);
	cout << "INT CONVERSION OF str1 "<<intVar<< endl;
	cout << "FLOAT CONVERSION OF str2"<< floatVar<< endl;
return 0;
}
