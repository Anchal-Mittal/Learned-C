#include<iostream>

using namespace std;

int main(){
int num = 7 ;  
	//DECLARTION OF POINTERS
int *ptr1 ,*ptr ;
int arr[4],max, inc=0;	
	//ASSIGNING THE ADDRESS TO THE POINTER
	
ptr = &num;
ptr1 = NULL;	//SHOULD BE INITIALIZED 
	
cout << " THE VALUE STORED AT ptr = " << *ptr << endl;	
	//NULL POINTER 
cout << " THE VALUE STORED AT ptr1 = " << ptr1 << endl;//**ERROR IF WE PRINT *ptr1	
	
ptr1 = ptr;
cout << " THE VALUE STORED AT ptr1 = " << *ptr1 << endl;	

ptr1 = arr;
	//FINDING THE LENGTH OF THE ARRAY
max = sizeof(arr) / sizeof(*arr);
	
while (inc<max){
	arr[inc]=inc;
	cout << " THE VALUE STORED OF arr [ " << inc << " ] = " << arr[inc] << endl;	
	cout << " THE VALUE STORED AT ptr1 = " << ptr1 << endl;	
 	inc++;
	ptr1++;	
}
return 0;
}
