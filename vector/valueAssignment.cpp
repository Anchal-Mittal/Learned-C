#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    vector <int> v1;
    vector <int> v2;
    int array[]={1,2,3,4,5,6};
    v.assign(array,array+3);// assign three value to the vector from starting
    vector<int> ::iterator i;
    for(i=v.begin();i!=v.end();i++)
        cout << *i << " ";
    cout << endl;    
    v1.assign(array,array+6);// assign six value  to the vector from starting
    vector<int> ::iterator ir;
    for(ir=v1.begin();ir!=v1.end();ir++)
        cout <<*ir << " ";
    v2.assign(array+1,array+6);// assign six value  to the vector from array[1]
    vector<int> ::iterator irr;
    for(irr=v2.begin();irr!=v2.end();irr++)
        cout <<*irr << " ";
         
return 0;    
}
