#include<iostream>
#include<vector>
using namespace std;

int main(){
	//vector<vector<int>>v1 does not work withpout spoce;
	vector <vector <int> > v1{ {1,2,3},
                               {4,5,6},
                               {11,45,33} };//it is valid with space
                               
    vector <vector <int> > v2(2,vector<int>(3));// creating  an array with 2 rows and 3 column and initialize with 0
    vector <vector <int> > v3(2,vector<int>(3,-1));//creating  an array with 2 rows and 3 column and initialize with -1

  for(int i=0;i<v1.size();i++){
		  for(int j=0;j<v1[i].size();j++){
			  cout<<v1[i][j]<< " ";
		  }
		  cout << endl;
	 }

    for(int i=0;i<2;i++){
		  for(int j=0;j<3;j++){
			  cout<<v2[i][j]<< " ";
		  }
		  cout << endl;
	 }

    for(int i=0;i<2;i++){
		  for(int j=0;j<3;j++){
			  cout<<v3[i][j]<< " ";
		  }
		  cout << endl;
	 }
return 0;
}
