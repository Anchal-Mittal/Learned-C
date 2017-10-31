//Functions using call by pointer 
#include<iostream>
using namespace std;
static int  globalFunCount = 10;

void localGlobalCount();

 int main(){
 localGlobalCount();
 cout <<  "Global Function  Count="  << globalFunCount << endl;
 return 0;
 }
 
 void localGlobalCount(){
  int i= 10;   
  static int  localFunCount = 0;
    while(i!=0)
    {
    localFunCount++;
    globalFunCount++;
    i--;
    }
cout << "Local Function  Count =" << localFunCount << endl;
cout <<  "Global Function  Count="  << globalFunCount << endl;
}
