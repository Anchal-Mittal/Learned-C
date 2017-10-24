// bASIC DATA TYPE
#include<iostream>
using namespace std;

int main(){
	short shortvar;
	int intvar;
	long longvar;	
	unsigned char unsignCharVar;
	signed char sign_char_var;
	unsigned int unsign_int;
	signed int sign_int_var;
	float float_var;
	double double_var;
	unsigned long unsign_long_var;
	signed long sign_long_var;
	short shortArr[10];
	int intArr[10];
	long longArr[10];
	unsigned char unsign_char_Arr[10];
	signed char sign_char_Arr[10];
	unsigned int unsign_int_Arr[10];
	signed int sign_int_Arr[10];
	float float_Arr[10];
	double double_Arr[10];	
	unsigned long unsign_long_Arr[10];
	signed long sign_long_Arr[10];
	cout <<  "PRINT SIZE OF DATA_TYPES"<< endl;
	cout << "INTERGER "<< sizeof(intvar)<<endl;
	cout << "long INTERGER "<< sizeof(longvar)<<endl;
	cout << "unsigned char "<< sizeof(unsign_char_var)<<endl;
	cout << "signed char"<< sizeof( sign_char_var)<<endl;
	cout << "unsigned int"<< sizeof(unsign_int)<<endl;
	cout << "signed int "<< sizeof(sign_int_var)<<endl;
	cout << "float"<< sizeof(float_var)<<endl;
	cout << "double"<< sizeof(double_var)<<endl;						
	cout << "unsigned long int"<< sizeof(unsign_long_var)<<endl;
	cout << "siogned long "<< sizeof(sign_long_var)<<endl;
	 
	 
	cout <<  "PRINT SIZE OF ARRAY_TYPES"<< endl;
	cout << "INTERGER ARRAY "<< sizeof(intArr)<<endl;
	cout << "long INTERGER ARRAY "<< sizeof(longArr)<<endl;
	cout << "unsigned char ARRAY"<< sizeof( unsign_char_Arr)<<endl;
	cout << "signed char ARRAY"<< sizeof( sign_char_Arr)<<endl;
	cout << "unsigned int ARRAY"<< sizeof(unsign_int_Arr)<<endl;
	cout << "signed int ARRAY "<< sizeof(sign_int_Arr)<<endl;
	cout << "float ARRAY"<< sizeof(float_Arr)<<endl;
	cout << "double ARRAY"<< sizeof(double_Arr)<<endl;						
	cout << "unsigned long int ARRAY"<< sizeof(unsign_long_Arr)<<endl;
	cout << "siogned long ARRAY"<< sizeof(sign_long_Arr)<<endl;	
	
	return 0;
				
}

