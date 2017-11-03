
#include <iostream>

using namespace std;

int main()
{
  int arr[10] ;
  int arr1[]={1,2,7,5,87};
  int arr2[6];
  arr2[0] = 3;
  arr2[1] = 2;
  arr2[2]=  7;
  arr2[10/3] = 2;//put the element at arr2[3]
 
 //FINDING THE LENGTH OF THE ARRAY
  int  lengthOfarr = sizeof(arr)/sizeof(*arr);
  cout << "Length of the array arr is " << lengthOfarr << endl ;
return 0;
}
 




