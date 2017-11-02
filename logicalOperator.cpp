#include <iostream>

using namespace std;

int main()
{
    int num1=0;
    int num2 =7;
    int num3 =8;
    int num4 =8;
    
  if((num1==num2)&&(num3==num4)){
     cout << "num1 is equal to num2 and num3 is equal to num4" << endl;
   }
         
  if((num1==num2)||(num3 == num4)){
     cout << "num1 is equal to num2 or num3 is equal to num4" << endl;
   }
   
  if(!num1){
     cout << " num1 is not zero" << endl;
  }
   
    return 0;
} 
