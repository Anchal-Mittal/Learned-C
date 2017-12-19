					   //LOCATE THE CHARACTER IN A GIVEN STRING
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char str[]="every programmer knows the use of memchar!";
	char *pointer=(char*)memchr(str,'k',40);
	if(pointer==NULL)
	   cout << "CHARACTER IS NOT EXIST " << endl;
	else
	   cout <<"CHARACTER EXIST AT LOCATION  "<< pointer-str+1<< endl;
	   cout << pointer <<endl;//point to  left string after first k
	char *pointer1 =(char*)memchr(pointer,'u',20);
	if(pointer1==NULL)
	   cout << "CHARACTER IS NOT EXIST " << endl;
	else
	   cout <<"CHARACTER EXIST AT LOCATION  "<< pointer1-pointer+1<< endl;
	  cout <<pointer1;

return 0;
}
/*Locate character in block of memory
Searches within the first num bytes of the block of memory pointed by ptr for the first occurrence of value (interpreted as an unsigned char), and returns a pointer to it.

Both value and each of the bytes checked on the the ptr array are interpreted as unsigned char for the comparison.

Parameters
ptr(parameter 1)
Pointer to the block of memory where the search is performed.

value(parameter 2)
Value to be located. The value is passed as an int, but the function performs a byte per byte search using the unsigned char conversion of this value.
num

Number of bytes to be analyzed.(parameter 3)
size_t is an unsigned integral type.

Return Value
A pointer to the first occurrence of value in the block of memory pointed by ptr.
If the value is not found, the function returns a null pointer.

*/
