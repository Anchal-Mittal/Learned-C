#include<iostream>

using namespace std;

   //DECLARTION OF FUNCTION
void square(int);

//void square(int &num); **ERROR AMBIGUITY 

void square_ref(int &num);

void square_point(int *num);
int main(){
  
	// LOCALLY DECLARE VARIABLES
int num1 , square_result;

   //INITIALIZATION OF VARIABLES	
num1=4;
	
	//CALLING THE FUNCTION BY CALL BY VALUE
square(num1);	
	
cout << "THE RESULT OF SQUARE OF A NUMBERS " << num1 << endl ;	

	//CALLING THE FUNCTION BY CALL BY REFERENCE

square_ref(num1 );	

cout << "THE RESULT OF SQUARE OF A NUMBERS " << num1 << endl ;	

square_point(&num1 );	

cout << "THE RESULT OF SQUARE OF A NUMBERS " << num1 << endl ;	
	
return 0;	
}
  
	//DEFINATION OF FUNCTION CALLED BY VALUE
void square(int num){
 num=(num * num);
 return;
}

  //DEFINATION OF FUNCTION CALLED BY REFERENCE
void square_ref(int &num){
 num=(num *num);
 return;
}
 
	//DEFINATION OF FUNCTION CALLED BY POINTERS
void square_point(int *num){
 *num=(*num) * (*num);
 return ;	
}
