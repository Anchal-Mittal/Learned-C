#include<iostream>
using namespace std;

class Base{
};

class Base2{
	int var;
	float var2;
};
class Derived1:public Base{
};

class Derived2:private Base{
};

class Derived3 :virtual public Base{
};

class Derived4 : public Derived1{
};

class Derived5 :public Derived3{
};

class Derived6 :virtual Derived3{
};

class Derived7:private Base2{
};

class Derived8 :virtual public Base2{
};

int main(){
	cout << "BASE "<< sizeof(Base)<< endl;
  cout << "Derived1 "<<sizeof(Derived1)<< endl;                     //output 1
	cout << "Derived2 "<<sizeof(Derived2)<< endl;                    //output 1
	cout << "Derived3(virtual) "<<sizeof(Derived3)<< endl;           //output 4
	cout << "Derived4 "<<sizeof(Derived4)<< endl;                    //output 1
	cout << "Derived5() "<<sizeof(Derived5)<< endl;                  //output 4
	cout << "Derived6() "<<sizeof(Derived6)<< endl;                  //output 4
	cout << "BASE2 " << sizeof(Base2)<<endl;                         //output 8
	cout << "Derived7 "<<sizeof(Derived7)<< endl;                    //output 8
	cout << "Derived8(virtual) "<<sizeof(Derived8)<< endl;           //output 12

return 0;
}
