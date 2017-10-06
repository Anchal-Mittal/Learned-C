#include<iostream>
#include<cstring>

using namespace std;


int main(){
// DECLARTION OF STRING VARIABLES
char str_arr1[10] = "WELCOME";
char str_arr2[5] = "To" ;
char str_arr3[10] = "Universe" ;
char  str_arr4[20];	
	
char str_arr[5] = { 'h' ,'e' , 'l' ,'l', 'o'  };
cout << str_arr << endl;	

	//OPERATION ON STRINGS
strcpy(str_arr4	, str_arr1);
cout << " THE RESULT OF AFTER COPYING str_arr1 INTO str_srr4 IS :" << str_arr4 << endl;	

	//FINDING THE LENGTH OF THE STRING
int string_length = strlen(str_arr2);
cout << "THE LENGTH OF	THE STRING 2 IS " << string_length << endl; 
	
	// CONCATENATE THE TWO STRINGS
strcat(str_arr1 , str_arr2);   //RESULT AFTER CONCATENATION WILL BE IN str_arr1 

cout << "THE RESULTTANT STRING AFTER CONCATEBATE OF str_arr1 AND str_arr2 IS "        << str_arr1  << endl;
return 0;
}
