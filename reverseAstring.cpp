#include<iostream>
using namespace std;

void swap(char *num1,char *num2){
	char temp=*num1;
	*num1=*num2;
	*num2=temp;
}

void reverseArray(char array[10],int size){
	char *pointer1=&array[0];
	char *pointer2=&array[size-1];
	while(pointer1<pointer2){
		swap(pointer1,pointer2);
          pointer1++;
		  --pointer2;
	}
}

int main(){
	char array[]="hellomAnchal" ;
	int size=sizeof(array)/sizeof(array[0]);

	cout << "THE LENGTH OF THE STRING IS " << size << endl;

	reverseArray(array,size);
	cout << "THE REVERSE ARRAY IS "<< endl;
	for (int i=0;i<size;i++)
		cout << array[i]<< " ";

}
