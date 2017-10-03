#include<iostream>

using namespace std;

int main(){

	//declation of variables
	
int int_var1, int_var2, int_sum, int_mul, int_div;
float float_var1, float_var2, float_sum, float_mul;

	// initialization of variables	
int_var1 =5;
int_var2 =15;
float_var1 =5.1;
float_var2 =15.0;

	//multipication of two integers
	
int_mul = int_var1 * int_var2;

cout << "MULTIPICATION OF TWO INTEGERS "<< int_mul << endl;
	
	//multipication of integer and float and assigned to int

int_mul = float_var1 * int_var1;

cout << "MULTIPICATION OF FLOAT AND INTEGER AND RESULT ASSIGNED TO AN INTEGER "<< int_mul << endl;
		
	//multipication of integer and float and assigned to float

float_mul = float_var1 * int_var1;

cout << "MULTIPICATION OF FLOAT AND INTEGER AND RESULT ASSIGNED TO A FLOAT "<< float_mul << endl;
		
	//addition of two integers
	
int_sum = int_var1 + int_var2;

cout << "ADDITION OF TWO INTEGERS "<< int_sum << endl;
	
	//addition of integer and float and assigned to int

int_sum = float_var1 + int_var1;

cout << "ADDITION OF FLOAT AND INTEGER AND RESULT ASSIGNED TO AN INTEGER  "<< int_sum << endl;
		
	//addition of integer and float and assigned to float

float_sum = float_var1 + int_var1;

cout << "ADDITTION OF FLOAT AND INTEGER AND RESULT ASSIGNED TO A FLOAT "<< float_sum << endl;
	
	//division of two integers
	
int_sum = int_var1 / int_var2;

cout << "DIVISION OF TWO INTEGERS "<< int_sum << endl;
	
	//division of integer and float and assigned to int

int_div = float_var1 / int_var1;

cout << "DIVISTION OF FLOAT AND INTEGER AND RESULT ASSIGNED TO AN INTEGER "<< int_div << endl;
		
	//division of integer and float and assigned to float

//float_div = int_var1 / float_var1; **ERROR "CAN NOT ASSIGNED TO A FLOAT"
//float_div = float_var1 / int_var1; **ERROR "CAN NOT ASSIGNED TO A FLOAT"

	
return 0;
}

