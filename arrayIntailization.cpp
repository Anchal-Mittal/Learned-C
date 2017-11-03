/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
 arr2[10/3] = 2;// INSERT THE ELEMENT AT arr2[3]
 int moreIntializationArr[2] = {1, 5, 6, 6, 7};//**ERROR DOES NOT ALLOW TO INITIAILIZATION LARGER THEN ITSB SIZE 
 
 //FINDING THE LENGTH OF THE ARRAY
 int  lengthOfarr = sizeof(arr)/sizeof(*arr);
 cout << "Length of the array arr is " << lengthOfarr << endl ;
 int  lengthOfarr1 = sizeof(arr1)/sizeof(*arr1);
 cout << "Length of the array arr is " << lengthOfarr1 << endl ;
 int  lengthOfarr2 = sizeof(arr2)/sizeof(*arr2);
 cout << "Length of the array arr is " << lengthOfarr2 << endl ;
 
 
 return 0;
}
 







