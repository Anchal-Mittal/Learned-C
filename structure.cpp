#include<iostream>

using namespace std;

// DEFINATION OF THE FUNCTIONS
void area( struct Cuboid *cuboid);
void volume( struct Cuboid *cuboid);
void print( struct Cuboid cuboid);
void dimension(  struct Cuboid cuboid);

  // DECLARATION AND DEFINATION OF STRUCTURE
struct Cuboid{
	float length;
	float breadth;
	float height;
	float area;
	float  volume;
};

int main(){

     // CREATING THE STRUCTURE OBJECT	
  struct Cuboid cuboid; 
  struct Cuboid cuboid1; 

    	// INTIALIZATION OF THE CUBOID 
  cuboid1.length = 7;
  cuboid1.breadth = 8;
  cuboid1.height = 9;	
	
  cuboid.length = 8;
  cuboid.breadth = 2;
  cuboid.height = 3;

	     // CALLING DIMENSION FUNCTION
  dimension(cuboid);
  dimension(cuboid1);

return 0;
}


    // DEFINATION OF DIMENSION FUNCTION
void dimension( struct Cuboid cuboid){
      // CALLING AREA FUNCTION
  area(&cuboid);
      // CALLING VOLUME FUNCTION	
  volume( &cuboid);
      // CALLING PRINT FUNCTION	
  print(  cuboid);	
}

      // DEFINATION OF AREA FUNCTION
      // IF WE CALL BY VALUE THE AREA WILL NOT CHANGE SO WE CALL BY POINTER
void area( struct Cuboid *cuboid){
  cuboid->area = (cuboid->length * cuboid->breadth) +(cuboid->breadth *cuboid->height) + (cuboid->length *cuboid->height);
}

    // DEFINATION OF PRINT FUNCTION BY CALL BY VALUE
void print( struct Cuboid cuboid){
  cout << "THE LENGTH OF THE CUBOID IS " << cuboid.length << endl; 
  cout << "THE BREADTH OF THE CUBOID IS " << cuboid.breadth << endl; 
  cout << "THE HEIGHT OF THE CUBOID IS " << cuboid.height << endl; 
  cout << "THE AREA OF THE CUBOID IS " << cuboid.area << endl;
  cout << "THE VOLUME OF THE CUBOID IS " << cuboid.volume << endl; 
return;
}

      // DEFINATION OF VOLUME FUNCTION BY CALL BY POINTERS
void volume(struct Cuboid *cuboid){
   cuboid->volume = cuboid->length * cuboid->breadth * cuboid->height ;
}
	 
