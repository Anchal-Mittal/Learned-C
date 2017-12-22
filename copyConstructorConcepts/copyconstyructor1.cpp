#include<iostream>
using namespace std;

class Point{
  public:
	Point(){}
	Point(Point &p){}
};

class Dot{
  public: 
  Dot(){}
  Dot(Dot &d){}
};

Dot fun1(){
    cout << "dot fun";
    Dot dot;
    return dot;
}

Point fun(){
    cout << "fun called";
	Point point;
	return point;
}

int main(){
	Point p1;
	Point p2;
	p2=fun();
	Dot d1;
	Dot d2;
	//Dot d3=fun1()// not nalid due to not having const in copy constructor 
	d2 =fun1(); // valid without having const 
return 0;
}
/* REASON 
The function fun1() returns by value. So the compiler creates a temporary object which is copied to D3 
using copy constructor in the original program (The temporary object is passed as an argument to copy 
constructor). The reason for compiler error is, compiler created temporary objects cannot be bound to
non-const references and the original program tries to do that. It doesn’t make sense to modify compiler
created temporary objects as they can die any moment.
*/
