#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char buffer1[]="ABCDEFGHIJKL!";
	char buffer2[]="ABCDEFGHIJTL!";
	
	int n=memcmp(buffer1,buffer2,10);
	if(n>0)
	 cout << "buffer1 is greater than buffer2"<< endl;
    else if (n<0)
	 cout << "buffer1 is less than buffer2" << endl;
    else
	 cout <<"both are equal upto the given length"<< endl;
    n=memcmp(buffer1,buffer2,13);
    if(n>0)
	 cout << "buffer1 is greater than buffer2"<< endl;
    else if (n<0)
	 cout << "buffer1 is less than buffer2" << endl;
    else
	 cout <<"both are equal upto the given length"<< endl;

return 0;
}

/*
Compare two blocks of memory

Compares the first num bytes of the block of memory pointed by ptr1 to the first num bytes pointed by ptr2, returning zero if they all match or a value different from zero representing which is greater if they do not.

Notice that, unlike strcmp, the function does not stop comparing after finding a null character.

Parameters

ptr1(parameter1 )
Pointer to block of memory.

ptr2(parameter2)
Pointer to block of memory.

num(parameter3)
Number of bytes to compare.

*/
