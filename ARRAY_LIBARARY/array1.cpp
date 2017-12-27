#include<iostream>
#include<array>
#include<stdexcept>
using namespace std;

int main(){
array <int,5> arr1={1,9,7,6,8};
	for(int i=0;i<arr1.size();i++){
		  cout << arr1.at(i) << " ";
	}
try{
	  cout << arr1.at(10);
}catch(out_of_range e){
	cout <<"Error occur" << e.what()<< endl;
}
return 0;
}
