#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> ::iterator it;
    v1.push_back(10);
    it=v1.begin();
    it=v1.insert(it,5);
    
    cout <<"BEFORE SWAPPING v1 "<<endl;
    for(;it!=v1.end();it++)
        cout <<*it << " ";
    cout << endl;
    
    v2.push_back(15);
    it=v2.begin();
    it=v2.insert(it,34);
    cout <<"BEFORE SWAPPING v2 "<<endl;
    for(;it!=v2.end();it++)
        cout <<*it <<" ";
    cout << endl;
    
    swap(v1,v2);
    cout << "AFTER SWAP VECTOR v1 "<<endl; 
    it=v1.begin();
    for(;it!=v1.end();it++)
        cout <<*it <<" ";
    cout<< endl;
    
    it=v2.begin();
    cout << "AFTER SWAP VECTOR v2 "<<endl; 
    for(;it!=v2.end();it++)
        cout <<*it <<" ";
    cout << endl;
    
    v2.clear();
    cout << "AFTER CLEAR v2 "<< endl;
    it=v2.begin();
    for(;it!=v2.end();it++)
        cout <<*it <<" ";
return 0;
}
/*
           OUTPUT
BEFORE SWAPPING v1 
5 10 
BEFORE SWAPPING v2 
34 15 
AFTER SWAP VECTOR v1 
34 15 
AFTER SWAP VECTOR v2 
5 10 
AFTER CLEAR v2 */
