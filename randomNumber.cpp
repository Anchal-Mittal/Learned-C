#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	cout<<"ENTER THE NUMBERS DO U WANT TO RANDOMLY GENERATE" << endl;
	int num;
	cin>> num;
	for (int i=0;i<num; i++){
	int x=rand();
	cout << x << " ";	
	}
  
	cout << endl <<"ENTER THE RANGE OF NUMBER DO U WANT TO GENERATE " << endl;
  int StartRange;
	int EndRange;
	cout <<"ENTER THE START RANGE " << endl;
	cin>>StartRange;

  cout <<"ENTER THE END RANGE " << endl;
	cin>> EndRange;
	
  for (int i=0;i<num; i++){
	int x=StartRange+((rand()) % (EndRange-StartRange));
	cout << x << " ";	
	}
return 0;
	
}
