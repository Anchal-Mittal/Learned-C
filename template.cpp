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

<T int> num1;
<T int> num2;
cout << " ENTER THE NUM1 "<< endl;
cin >> num1;

cout << " ENTER THE NUM2  "<< endl;
cin >> num2;

cout << "ADDITION OF TWO NUMBERS "<< endl;
<T int> result = add <int>(num1 , num2);
cout << result << endl ;


cout << "SUBTRACTION OF TWO NUMBERS "<< endl;
<T float> result = sub<float>(num1 , num2);
cout << result << endl ;

cout << "MULTIPICATION OF TWO NUMBERS "<< endl;
<T long>result = multiply <long>(num1 , num2);
cout << result << endl ;

return 0;

}
