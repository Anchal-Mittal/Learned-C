#include<iostream>

using namespace std;
int add();

// globally declaration of variable
int x=8;
int y=15;
          
int main(){
	
//declation of local variables
int x,y,z,sum;
	
//initilization of local variables
x=10;
y=5;
	
// use the local scope of variables 
z=x+y;
	
//calling  the method add that will return sum of global variables;
sum=add();	
	
cout << "VALUE OF Z IS :" << z << endl;
cout << "VALUE OF SUM IS :" <<sum << endl;
return 0;
}

//defination of the function add
int add(){
	return(x+y);
}
