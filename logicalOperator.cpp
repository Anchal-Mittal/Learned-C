#include <iostream>

using namespace std;

int main()
{
    int num1=0;
    int num2 =7;
    int num3 =8;
    int num4 =8;
    
            // AND OPERATOR
  if((num1==num2)&&(num3==num4)){
     cout << "num1 is equal to num2 and num3 is equal to num4" << endl;
   }
   
            // AND OPERATOR WILL CHECK BOTH CONDITIONS 
   if((num1 == num2)&& (cout<< "num1 and num2 are equal" << endl));
       
            // OR OPERATOR
   if((num1==num2)||(num3 == num4)){
      cout << "num1 is equal to num2 or num3 is equal to num4" << endl;
   }
    
            // WILL CHECK SECOND CONDITION IF FIRST ONE IS NOT TRUE
   if((num1 == num2) ||(cout<< "num1 and num2 are not equal" << endl));
   
            // DOES NOT CHECK SECOND CONDITION IF FIRST IS TRUE
   if((num3 == num4) ||(cout<< "num3 and num4 are not equal" << endl)); 
   
           // NOT  OPERATOR
    if(!num1){
     cout << " num1 is not zero" << endl;
   }
   
    return 0;
}
