#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> v1;
    int array[]={81,2,33,14,5,36};
    v1.assign(array,array+6);// assign three value to the vector from starting
    vector<int> ::iterator i;
    for(i=v1.begin();i!=v1.end();i++)
        cout << *i << " ";
    cout << endl;    
    sort(v1.begin(),v1.end());//starting and end location 
    cout << "SORTED ELEMENT OF THE VALUE "<< endl;
    vector<int> ::iterator irr;
    for(irr=v1.begin();irr!=v1.end();irr++)
        cout <<*irr << " ";
return 0;    
}
