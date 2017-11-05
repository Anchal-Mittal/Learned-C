#include<iostream>
#include<string.h>
using namespace std;

int main(){

	
	char arr[10];
	cout << "ENTER THE STRING " << endl;
	cin >>arr;
	int strLength=strlen(arr);
    char temp;
    int sizee =strLength-1;
    
	for (int i =0; i <strLength; i++) {
		temp=arr[i];
		arr[i]=arr[sizee-i];
		arr[sizee-i]=temp;
	}
	cout << "The Reverse String  is " << endl;
	for(int i=0;i< strLength;i++) {
		cout << arr[i] << " ";
	} 	
return 0;
}
