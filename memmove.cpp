			// MOVE THE BLOCK OF THE MEMORY
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char str[]="every programmer knows the use of memset!";
	memmove(str+28,str+23,8);
	cout << str<< endl;
    return 0;
}
/*
Parameters

destination(parameter 1)
Pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

source(parameter2)
Pointer to the source of data to be copied, type-casted to a pointer of type const void*.

num (parameter3)
Number of bytes to copy.
size_t is an unsigned integral type.

*/
