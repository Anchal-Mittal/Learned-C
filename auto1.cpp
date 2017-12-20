#include<iostream>
#include <typeinfo>
using namespace std;
int main(){
    auto x=3;
    auto y=5.73;
    auto p=&x;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(p).name() << endl;
return 0;    
}
?*
The auto keyword specifies that the type of the variable that is begin declared will automatically be deduced from
its initializer and for functions if their return type is auto then that will be evaluated by return type expression
at runtime.
*/
