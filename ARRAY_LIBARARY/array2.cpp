#include<iostream>
#include<array>
#include<stdexcept>
using namespace std;

int main(){
/*int size;
cout << "ENTER TEH SIZE OF ARRAY "<< endl;
cin >> size;
array <int,size> arr1;***REQUIRED AN ARRAY SIZE CONST */

/*int size=5;
	array <int,size> arr1;*** ERROR SIZE SHOULD BE A CONST*/

  array<int ,5> arr1;
	array<int , 5> :: iterator ir;
	array<int , 5> :: reverse_iterator ri;
	cout <<"\n";
	
  for(int i=0;i<5;i++){
		  cin>> arr1.at(i) ;
	}
	
  for(int i=0;i<5;i++){
		  cout <<arr1.at(i)<< " " ;
	}
	cout <<"\n";
	
  for(ir=arr1.begin();ir!=arr1.end();ir++){
		  cout <<*ir << " ";
	}
	cout <<"\n";
	
  for(ri=arr1.rbegin();ri!=arr1.rend();ri++){
		  cout <<*ri<< " " ;
	}
	
  cout <<"\n";
 try{
	cout << arr1.at(10);
}catch(out_of_range e){
	cout <<"Error occur" << e.what()<< endl;
}
return 0;
}
