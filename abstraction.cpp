#include<iostream>

using namespace std;

class Operation{
private:
int num1;
int num2;
int result;
public:	
Operation(int n1 ,int n2){
	num1 = n1;
	num2 = n2;
}
public:
void add();
void sub();
void mul();
void div();
void display();	
};

void Operation ::add(){
result = num1 + num2;
}
	
void Operation ::sub(){
result = num1 - num2;
}

void Operation ::mul(){
result = num1 * num2;
}
	
void Operation ::div(){
result = num1 / num2;
}

void Operation ::display(){
cout <<result << endl;
}

int main(){
Operation op(4,5);
op.add();
cout << "THE ADDITION OF TWO NUMBERS =";
op.display();	
op.sub();
cout << "THE SUBTRACTION OF TWO NUMBERS =";
op.display();
op.mul();
cout << "THE MULTIPICATION OF TWO NUMBERS =";
op.display();	
op.div();
cout << "THE DIVISION OF TWO NUMBERS =";
op.display();	
return 0;
}
	


