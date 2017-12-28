#include<iostream>
using namespace std;

//-----------------------------------------Swap Two NUmbers--------------------------------------------------------------
void swap(int &num1, int &num2){
	num1=num1 + num2;
	num2=num1-num2;
	num1=num1-num2;
}

//----------------------------------------------Main Function------------------------------------------------------------
int main(){
	int num1,num2;
	cout << "ENTER FIRST NUMBER " << endl;
	cin >> num1;
	cout << "ENTER TWO NUMBER "<< endl;
	cin >> num2;
	swap(num1,num2);
	cout << "AFTER SWAPING \nFIRST  "<<num1 <<"\nSECOND "<< num2;
	return 0;
}
