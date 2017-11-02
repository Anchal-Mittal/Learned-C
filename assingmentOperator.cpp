#include <iostream>

using namespace std;

int main()
{
    int num1=9;
    int num2 =7;
    int result;
     
    result = num1;
    result +=num2;
    cout << "RESULT OF ADDITION AND ASSINGMENT OPERATOR " << result <<  endl;
    
    result =num1;
    result -=num2;
    cout << "RESULT OF SUBTRACTION AND ASSINGMENT OPERATOR " << result <<  endl;
    
    result =num1;
    result /=num2;
    cout << "RESULT OF DIVIDE AND ASSINGMENT OPERATOR " << result <<  endl;
    
    result =num1;
    result *=num2;
    cout << "RESULT OF MULTIPICATION AND ASSINGMENT OPERATOR " << result << endl;
    
    return 0;
}

