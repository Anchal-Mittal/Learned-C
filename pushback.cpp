#include<iostream>
#include<vector>
using namespace std;
int main(){
int sum=0;    
vector <int> v1;
v1.push_back(10);
v1.push_back(20);
v1.push_back(30);
while(!v1.empty()){
     sum=sum+v1.back();
     v1.pop_back();     
}
cout << "THE SUM OF THE ELEMENT IS "<<sum<< endl;
return 0;    
}
