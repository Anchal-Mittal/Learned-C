#include<iostream>
#include<cmath>

using namespace std;

// DECLARATION OF CLASS 
class Rectangle{
 public:// ACCESS SPECIFIER IS PUBLIC
        //DECLARATION OF VARIABLES
 float length;
 float breadth;
 float area;
 float perimeter;
 float diagonal;
	    // DECLARATION OF FUNCTION AND CAN BE ACCESSS OUTSIDE THE CLASS
 void set_length(float length);
 void set_breadth(float breadth);
 void get_area();
 void get_perameter();
 void get_diagonal();
 void display();	
};
 
      // DEFINATION OF THE FUNCTIONS
void Rectangle :: set_length(float leng){
	length = leng;//IF WE PUT THE SAME NAME THEN IT WILL NOT WORK CORRECTLY
}

void Rectangle :: set_breadth(float bread){
	breadth = bread;
}

void Rectangle :: get_area(){
area=length * breadth;
return ;
}

void  Rectangle :: get_perameter( ){
 perimeter = (2*(length + breadth ));
return ;
}

void  Rectangle :: get_diagonal( ){
 diagonal = sqrt(pow(length,2) +pow(breadth ,2 ));
return  ;
}

void Rectangle ::display( ){
cout << " THE LENGTH OF THE RECTANGLE IS " << length << endl;
cout << " THE BREADTH OF THE RECTANGLE IS "<< breadth << endl;
cout << " THE AREA OF THE RECTANGLE IS "<< area << endl;
cout << " THE PERIMETRE OF THE RECTANGLE IS "<< perimeter << endl;
cout << "THE DIAGONAL OF THE RECTANGLE IS "<< diagonal << endl;	
return ;	
}
int main(){
	// CREATE THE OBJECT OF THE CLASS
Rectangle rect ;
rect.set_length(3);
rect.set_breadth(4);
rect.get_area();
rect.get_diagonal();
rect.get_perameter();
rect.display();
return 0;	
}
