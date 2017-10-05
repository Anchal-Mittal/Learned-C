#include<iostream>

using namespace std;

int power(int num, int exp);
int add(int num1,int num2);
int for_poe(int num1,int exp);

int main(){
 int num1,num2,powe;
 num1=9;
 num2=3;
 powe=2;
  // calling power function
 
 int pow_result=power(num1,powe);
 cout << "the result of the power is "<< pow_result << endl;
 
 //calling power function using for loop
 int pow_result1=for_pow(num1,powe);
 cout << "the result of the power is "<< pow_result1 << endl;
 
 // calling add function
 int add_result=add(num1 , num2);
 cout << "the result of the add is " << add_result << endl;
 
 return 0;
}

//defination of power function
int power(int num , int exp){
if(exp==0)
    return 1;
else{
    num*power(num,exp-1);
     return num;
     
    }
 }


//calling add function 
int add(int num1,int num2){
      return num1+num2;
 }
 
//calling power function using for loop
 int for_pow(int num1 ,int exp ){
     int init=1;
  for (int i=0; i < exp ; i++){
   
   num1=num1 * init;  
  }
  return num1;
  }
     
 
 
