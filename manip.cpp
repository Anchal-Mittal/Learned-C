#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	//DECLARATION OF ARRAY
float arr[]={'A','B','C',7,45,4.7573};
	for(int i=0;i<6;i++){
		// PRINTS ONLY FLOAT NUMBER UPTO 2 DECIMAL IF HAVING 2 OR MORE PLACE DECIMAL AND OTHER DATA TYPE VALUE WITHOUT DECIMAL
		cout << setprecision(3) << arr[i]<< " ";
	}
	cout << endl;
	
	for(int i=0;i<6;i++){		
		//DUE TO USING FIXED  PRINT ALL NUMBER WITH 3 PALCE DECIMAL 
		cout<< fixed;
		cout << setprecision(3) << arr[i]<< " ";
	}
	return 0;
	
}
