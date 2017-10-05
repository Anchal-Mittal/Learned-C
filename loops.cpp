#include<iostream>

using namespace std;

int main (){
int num , max =10;

// FIND THE SQUARE OF THE INTEGERS UPTO THE GIVEN LIMITS

for ( int i = 0 ;i < max ;++i){
	cout << "SQUARE OF EVERY NUMBER " << i << "is " << i*i << endl ;
	
}

//FIND THE SERIES OF THE EVEN NUMBERS UPTO THE GIVEN LIMITS

cout << " THE SERIES OF EVEN NUMBER WILL BE " << endl;	 
int i = 0;	 
while (i < max){
	 i=i+2;
	cout << i << " ";	
}
cout << endl;	 
	 
	 // FIND THE SERIES OF ODD NUMBERS 

cout << "THE ODD NUMBER SEQUENCE UPTO THE GIVEN LIMIT " << endl ;	 
do {
	static int i=1;
	i=i+2;
	cout << i << endl;
}while (max < i);
 return 0;
}
