#include <iostream>

using namespace std;

template <typename T>

T add(T x , T y) {
T result = x+y;
return( result);
}

template <typename T>
T subtract(T x , T y) {
T result = x - y;
return( result);
}

template <typename T>
T multiply(T x , T y) {
T result = x * y;
return( result);
}


int main(){

int num1;
int  num2;
cout << " ENTER THE NUM1  "<< endl;
cin >> num1;

cout << " ENTER THE NUM2  "<< endl;
cin >> num2;

cout << "ADDITION OF TWO NUMBERS "<< endl;
int result = add <int>(num1 , num2);
cout << result << endl ;

cout << "USE TEMPLATE FOR ADDITION OF TWO FlOAT NUMBERS " <<add( 4.5,66.7) << endl;
cout << "SUBTRACTION OF TWO NUMBERS "<< endl;
float result1 = subtract <float>(num1 , num2);
cout << result1 << endl ;

cout <<"USE TEMPLATE FOR MULTIPCATION OF LONG  "<< multiply(38,7328) << endl;
cout << "MULTIPICATION OF TWO NUMBERS "<< endl;
long result2 = multiply <long>(num1 , num2);
cout << result2 << endl ;

return 0;

}
