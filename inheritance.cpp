#include<iostream>

using namespace std;

class Shape{
public:
float length;
float breadth;
float area;
float perimeter;
void set_length(float l);
void set_breadth(float b);
void area(float length,float breadth);
void perimeter(float length,float breadth);	
}
class Rectangle :: public  Shape
{

void area(float length,float breadth);
void perimeter(float length , float breadth);
}

void Rectangle ::area(float length , float breadth)
{
	area = length* breadth; 
}

void Rectangle ::perimeter(float length , float breadth)
{
	area = 2*(length+ breadth); 
}

class Triangle :: public Shape{
float height;
void set_height(float height);
void area(float length, float breadth ,float height);
void perimeter(float length, float breadth , float height);
}

void Triangle :: set_height(float heig){
height = heigh;
}

void Triangle ::area( float breadth , float height)
{
	area = 0.5*( breadth *height); 
}

void Triangle ::perimeter(float length , float breadth , float height)
{
	area = length+ breadth + height; 
}


void Triangle ::area(float length , float breadth)
{
	area = length* breadth; 
}
void Triangle ::perimeter(float length , float breadth)
{
	area = 2*(length+ breadth); 
}
class Square ::public Shape{
void area(float length);
void perimeter(float length);
}
void Square ::area(float length)
{
	area = length* length; 
}
void Square ::perimeter(float length)
{
	area = 4*(length); 
}
class Cube :: public Shape
{
void set_height(float height);
void area(float length, float breadth ,float height);
void perimeter(float length, float breadth , float height);
void volume(float length, float breadth , float height);
}

void Cube :: set_height(float heig)
{
	height=heig;
}
void Cube :: area(float length, float breadth ,float height)
{
	area = length * breadth * height;
}
void Cube :: perimeter(float length, float breadth ,float height)
{
	area = 4*(length + breadth + height);
}
//class Cuboid :: public Shape , Cube
//{
//void area(float length, float breadth ,float height);
//void perimeter(float length, float breadth , float height);
//void volume(float length, float breadth , float height);
//}
	

int main(){
Shape shp;		
Cuboid cuboid;
Cube cube;
Rectangle rect;
Triangle tri;
shp.set_length(5.0);
shp.set_breadth(4.0);
	
	
}
