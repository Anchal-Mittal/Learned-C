#include<iostream>
#include<vector>
using namespace std;

int main(){
	//vector<vector<int>>v1 does not work withpout spoce;
	vector <vector <int> > v1{ {1,2},
                             {4,5,6},
                             {11,45,33} };//it is valid with space
	 
   for(int i=0;i<v1.size();i++){
	     for(int j=0;j<v1[i].size();j++){
			      cout<<v1[i][j]<< " ";
		    }
		  cout << endl;
	 }
 return 0;  
}
