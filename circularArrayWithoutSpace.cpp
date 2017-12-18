#include<iostream>
using namespace std;
void circularArray(int array[10],int size){
    cout << "ENTER THE INDEX FROM WHICH LOCATION DO U WANT TO DISPLAY THE ELEMENT "<< endl;
    int loc;
    cin >> loc;
     for(int i=loc;i<size+loc;i++){
      cout << array[i%size] << " ";
    }
}
int main(){
    int array[5]={1,2,3,5,4};
    int size=sizeof(array)/sizeof(array[0]);
    circularArray(array,size);
    return 0;
}
