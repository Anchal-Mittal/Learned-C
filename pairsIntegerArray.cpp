#include <iostream>
using namespace std;

int main(){
    //code
int a[10]={2,4 ,6 ,-2,-6,3,-4,1,7,9};
for(int i=0;i<10;i++)
{
    for(int j=i;j<10;j++)
  {
   if(a[i]==(-a[j]))
     cout<< a[i] <<" " <<a[j]<< endl;   
   }
}
    return 0;
}
