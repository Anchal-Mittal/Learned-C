#include <iostream>

using namespace std;

void swap(int &num1 ,int  &num2){
 int temp;
temp=num1;
num1=num2;
num2 =temp;
return ;	
}

int main(){
int arr[5] ={ 3,8,1,2,7};
int temp;
	for(int i=0;i<5/2;i++){
 
		for(int j=0;j<5;j++){
        if(arr[j] > arr[j+1]){
		swap(arr[j] , arr[j+1]);
		}
	}
}
cout  << "THE SORTED ARRAY IS "<< endl;
			 for (int i=0;i<5;i++)
			 {
		cout << arr[i] << " "<< endl;	
   			}
		
return 0;		
}
