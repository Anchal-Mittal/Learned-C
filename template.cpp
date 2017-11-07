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

T num1;
T num2;
cout << " ENTER THE NUM1 "<< endl;
cin >> num1;

cout << " ENTER THE NUM2  "<< endl;
cin >> num2;

cout << "ADDITION OF TWO NUMBERS "<< endl;
T result = add(num1 , num2);
cout << result << endl ;


cout << "SUBTRACTION OF TWO NUMBERS "<< endl;
T result = sub(num1 , num2);
cout << result << endl ;

cout << "MULTIPICATION OF TWO NUMBERS "<< endl;
T result = multiply(num1 , num2);
cout << result << endl ;

return 0;

}
