#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int j=-1;
void reverseLength(string str){
	int size=str.length();
	int i=0;
	string resultString="";
	string inputstr;
	string empty=" ";
     	while( i < size ) {
		inputstr="";
		j++;
		if ( j < size ) {
          		while((str[j]!=empty[0])&&(str[j]!='\0')){
              			inputstr=inputstr+str[j];
              	  		j++;
			}
		}
		else {
			// j > size then break.
			break;
		}
		
		resultString=inputstr + " " + resultString;
		i++;
     	}
	cout << "\nReverse of Sentence"<<endl;
    	cout << resultString << endl;
}

int main(){
	string str;
	cout << "\nEnter Sentence" << endl;
	getline(cin,str);
  	reverseLength(str);
	return 0;
}
