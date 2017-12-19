#include<iostream>
#include<cstring>
using namespace std;

struct{
	int age;
	char name[40];
}person,personCopy;

int main(){
	char str[]="use of memcpy";
	memcpy(person.name,str,strlen(str)+1);
	person.age=50;
	memcpy(&personCopy,&person,sizeof(person));
	cout <<personCopy.age<<" "<<personCopy.name<<endl;
	return 0;
}
/*
Parameters:

destination(prameter1 )-
Pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

source(parameter2)-
Pointer to the source of data to be copied, type-casted to a pointer of type const void*.

num (parameter3)-
Number of bytes to copy.
size_t is an unsigned integral type.
*/
