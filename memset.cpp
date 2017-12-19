#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char str[]="every programmer knows the use of memset!";
	memset(str,'-',6);
	cout << str<< endl;
	memset(str,'@',8);
	cout << str;
return 0;
}
