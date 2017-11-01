//CPP program to see teh scope of variables using braces

#include <iostream>

using namespace std;

int main(){
    
    int num1=5;
    int num2=10;
    
    {
          // In another scope
        int num1=20;
        int num2=30;
        cout << num1 << endl;
        cout << num2 <<  endl;
        
    }  
    
    
    cout << num1 << endl;
    cout << num2 <<  endl;
    
    return 0;
       
}
