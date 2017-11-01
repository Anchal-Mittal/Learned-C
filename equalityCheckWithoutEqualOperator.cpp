//CPP program to check wheater two numbers are equal or not without using equal operator

#include <iostream>

using namespace std;

int main(){
    
    int num1=10;
    int num2=10;
     
            // used XOR operator to check wheater both numbers are equal or not!!!    
    if(!(num1 ^ num2))
        cout << "BOTH NUMBER ARE SAME" << endl;
    else
        cout << "BOTH NUMBERS ARE NOT SAME" << endl;
    
    return 0;
       
}
