#include <iostream>

using namespace std;

class Box{

private:
 int length;
 int breadth;
 int height;
public:
int getArea(int len ,int brea)=0;
void setLength(int len){
 length=len;
}
    
void setBreadth(int brea){
 breadth=brea;
}
    
void setHeigth(int hei){
 heigth=hei;
 }
    
}

int main() {
    cout<<"Hello";
    return 0;
}
