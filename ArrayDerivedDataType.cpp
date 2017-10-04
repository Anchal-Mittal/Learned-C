#include<iostream>

using namespace std;

int main(){
	//DECLARTION OF ARRAY 
 int arr1[5]= {3,8.9,2,7,2.0};// does not give error but take all values as int
 int arr2[]={3,8.9,1,7,3.9,5};
 int arr3[5];
 float arr4[]={1.01,2,3,4};	
 int size_of_arr1 , size_of_arr2 , size_of_arr4;;
	
	//INTIALIZATION OF ARRAY
 for(int i=0;i<5;i++){
 arr3[i]=i*i; 
  }
	 
	//WAY TO FIND THE LENGTH OF THE ARRAY
size_of_arr1 = sizeof(arr1)/sizeof(*arr1);
size_of_arr2 = sizeof(arr2)/sizeof(*arr2);
size_of_arr4 = sizeof(arr2)/sizeof(*arr4);

	//DISPLAY THE ELEMENT OF ARRAY
for(int i =0; i < size_of_arr1; i++){
 cout << "ELEMENT AT  arr1[" << i << "] = " << arr1[i] <<endl; 
  }
 
cout << endl;	
for(int i =0; i < size_of_arr2; i++){
 cout << "ELEMENT AT  arr2[" << i << "] = " << arr2[i] <<endl; 
  }	
	

cout << endl;	

for(int i =0;i<5;i++){
cout << "ELEMENT AT  arr3[" << i << "] = " << arr3[i] <<endl; 
  }

cout << endl;	
for(int i =0; i < size_of_arr4; i++){
 cout << "ELEMENT AT  arr4[" << i << "] = " << arr4[i] <<endl; 
  }	
		
	
	
return 0;
}
