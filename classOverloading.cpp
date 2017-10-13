#include<iostream>

using namespace std;

class Display{
private :
int num1;
float num2;
public:
void print(int num1);
void print(float num2);
};

void Display ::print(int num1){
cout << num1 << endl;
}

void Display ::print(float num1){
cout << num1 << endl;
}

int main(){
Display dis;
int inum = 4;
float fnum = 5.6;	
dis.print(inum);
dis.print(fnum);	
return 0;
}
