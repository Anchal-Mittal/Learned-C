#include<iostream>
using namespace std;

//-------------------------------------SWAP TWO NUMBERS USING XOR OPERATOR-----------------------------------------------
void swap(int &num1, int &num2){
  num1=num1 ^num2;
  num2=num1 ^ num2;
  num1 =num1 ^num2;
}

//-------------------------------------------MAIN FUNCTION --------------------------------------------------------------

int main(){
 int num1,num2;
 cout << "ENTER THE FIRST NUMBERS "<< endl;
 cin>> num1 ;
 cout << "ENTER THE SECOND  NUMBERS "<< endl;
 cin>> num2 ;
 swap(num1,num2);
 cout << "AFTER SWAPING TWO NUMBERS "<< endl;
 cout << "FIRST " << num1 <<"\n "<<"SECOND " <<  num2;
return 0;
}
