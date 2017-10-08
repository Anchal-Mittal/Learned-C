#include <iostream>
 
 using namespace std;
 
 // DEFINATION OF FIBONACCI FUNCTION
void fab(int n)
{
	int a=0;
	int b=1;
	int c=0; 
	cout << "The fabbonic series is : "<< endl;
	cout << a <<" " << b << "  ";
	for (int i=2;i<n-1;i++){
	c=a + b;
	a=b;
	b=c;
	cout << c << " ";	
	}

}

int main(){
int n=9;
	// CALLING  FIBONACII FUNCTION
  fab(9);
	return 0;

}
