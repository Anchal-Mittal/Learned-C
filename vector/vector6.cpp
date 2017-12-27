#include<iostream>
#include<vector>
using namespace std;

//----------------------------------call by value but it is also----------------------------------------------------

void fun(vector<int> v1){
    	v1.push_back(15);                     //it can update the vector but in this scope
}

//-----------------------------------call by referece -----------------------------------------------------------------

void fun1(vector <int>&v2){
	v2.push_back(25);
}

//------------------------------------call bu referenc with const-------------------------------------------------------

void fun2(const vector<int> &v3){
	//v3.push_back(35);                        //after passing with const keyword we can not update the vector v3
	for (int i=0;i<3;i++)
		cout<<v3[i] << " ";
}

//--------------------------------------main function-----------------------------------------------------------------

int main(){
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
  vector <int> :: iterator i;
  v1.push_back(10);
	v1.push_back(35);
	v1.push_back(20);
	fun(v1);
	cout<< "NOW THE VECTOR v1 IS ="<< endl;
	for (i=v1.begin();i!=v1.end();i++){
	  	cout << *i<< " ";
	}

  v2.push_back(10);
	v2.push_back(34);
	v2.push_back(50);
	fun1(v2);
	cout<< "\n NOW THE VECTOR v2 IS =" << endl;
	for (i=v2.begin();i!=v2.end();i++)
		  cout<< *i<< " ";
	
  v3.push_back(5);
	v3.push_back(15);
	v3.push_back(20);
	cout << "\nTHE THIRD VECTOR IS "<< endl;
	fun2(v3);

return 0;
}
