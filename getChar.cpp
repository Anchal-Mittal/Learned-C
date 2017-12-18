#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a;
	char ch[40];
	cout << "ENTER ANY INTEGER " << endl;
	cin >> a;
	cout << "ENTER ANY LINE" << endl;
	cin.getline(ch,40);
	cout << a << endl;
	cout << ch;
return 0;
}
/* line 13 will not print bcz, On pressing “Enter” (carriage return) on output screen after the first input , 
as the buffer of previous variable was the space for new container(as we did’nt clear it) , the program skips 
the following input of container.Reason to this is an occupied Buffer. The “\n” character goes remains there 
in buffer and read as next input.

 
