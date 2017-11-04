#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


void funIntArr(int arr[]){
	int lengthArr =sizeof(arr)/sizeof(*arr);
	cout << lengthArr << endl;
    for (int i=0;i<lengthArr;i++)
    { 
		cout << arr[i] << " ";   
	}
	
}

void funIntRefrArr(int *arr){
	int lengthArr =sizeof(arr)/sizeof(arr[0]);
	cout << lengthArr << endl;
    for (int i=0;i<lengthArr;i++)
    { 
		cout << arr[i] << " ";   
	}
	
}
void funCharArr(char arr[]){
	int lengthArr =strlen(arr);
    for (int i=0;i<lengthArr;i++)
    { 
		cout << arr[i] << " ";   
	}
	
}
void funCharRefrArr(char *arr){
	int lengthArr =strlen(arr);
    for (int i=0;i<lengthArr;i++)
    { 
		cout << arr[i] << " ";   
	}
	
}


int main(){
int arr[]={1,2 ,3, 4,45};
char charArr[] ="hello world";
funIntArr(arr);
funIntRefrArr(arr);
funCharArr(charArr);
funCharRefrArr(charArr);
return 0;	
}
