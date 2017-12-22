#include<iostream>
using namespace std;

class Point{
	int x;
	int y;
	public:
	Point(int xx,int yy){
		 x=xx;
		 y=yy;
	}
	
  Point(const Point &p){
		x=p.x;
		y=p.y;
	}

  int getx() { return x;}
	int gety() {return y;}
		
};

int main(){
	Point p1(10,23);
	Point p2(p1);
	//cout << p1.x<< " "<< p1.y<< endl;***ERROR BECAUSE X AND Y ARE PRIVATE CAN NOT EXIST OUTSIDE THE CLASS
	//cout << p2.x<< " "<< p2.y<< endl;
	cout << p1.getx()<< " "<< p1.gety()<< endl; //"""IS VALID BCZ WE R ACCESSING THE VARIABLES USING THE METHODS OF CLASS
	cout << p2.getx()<< " "<< p2.gety()<< endl;
return 0;
}
/* USE OF COPY CONSTRUCTOR
In C++, a Copy Constructor may be called in following cases:
1. When an object of the class is returned by value.
2. When an object of the class is passed (to a function) by value as an argument.
3. When an object is constructed based on another object of the same class.
4. When compiler generates a temporary object.
*/
