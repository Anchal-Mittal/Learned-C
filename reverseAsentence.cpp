#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int j=-1;
void reverseLength(string str,int size){
		 int i=0;
		 string resultString="";
		 string inputstr;
		 string empty=" ";
     while(i<size){
				  inputstr="";
				  j++;
          while((str[j]!=empty[0])&&(str[j]!='\0')){
              	  inputstr=inputstr+str[j];
              	  j++;
				 }
			   resultString=inputstr+" "+resultString;
		     i++;
     }
    cout <<resultString;
}

int main(){
	string str;
	int size;
	cout<< "ENTER THE STRING"<<endl;
	getline(cin,str);
	size=str.length();
	cout << str;
	cout <<endl<< "The size of the string is "<<size<< endl;
  reverseLength(str,size);
return 0;
}
