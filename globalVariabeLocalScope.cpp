#include <iostream>

using namespace std;

int var =10;

//typedef int INTEGER = 12;** ERROR CAN NOT INITAILIZE HERE

int main(){
int var =  1;
cout <<"THE SCOPE OF LOCAL VARIABEL ";
cout << var << endl;	

  // ::var = :: var + var;**ERROR CAN ASSIGNED VALUE TO A VARIABLE WITH SCOPE RESOLUTION OPERATOR
  
cout << "THE SCOPE OF GLOBAL VARIABLE ";
cout << :: var << endl;
var = :: var + var; // CAN USE :: OPERATOR HERE
cout <<"THE SCOPE OF LOCAL VARIABEL ";
cout << var << endl;
return 0;	
}
