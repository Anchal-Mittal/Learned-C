#include <iostream>

using namespace std;

int main()
{
    int num1=9;
    int num2 =7;
    if (num1==num2){
        cout << "Both Numbers are equal" << endl;
    }
   
    else if (num1 > num2 ){
       cout << "num1 is greater than num2 " << endl;
    }
    
     if (num1 < num2){
        cout << "num2 is greater than num1 " << endl;
        
    }
      
    if (num1 <= num2){
        cout << "num2 is greater than or equal to num1 " << endl;
      }
        
    if (num1 >= num2){
        cout << "num1 is greater than or equal to num2 " << endl;
        
        }
        
    if (num1 != num2){
        cout << "num2 is not equal to num1 " << endl;
       }
    
    return 0;
}
