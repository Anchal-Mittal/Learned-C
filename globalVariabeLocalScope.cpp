#include <iostream>

using namespace std;

int var =10;

int main(){
int var =  1;
cout <<"THE SCOPE OF LOCAL VARIABEL ";
cout << var << endl;	
cout << "THE SCOPE OF GLOBAL VARIABLE ";
cout << :: var;
return 0;	
}
