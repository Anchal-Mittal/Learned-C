#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1(3,100);
    vector<int>::iterator ir;
    ir=v1.begin();
    int array[]={3,5,4,3,6};
    
    ir=v1.insert(ir,10);
    for(;ir!=v1.end();ir++)
        cout << *ir <<" ";
    cout << endl;    
    
    ir=v1.erase(v1.begin()+1);
    for(;ir!=v1.end();ir++)
        cout << *ir <<" ";
    cout << endl;
    
    ir=v1.insert(v1.begin(),array,array+3); 
    for(;ir!=v1.end();ir++)
        cout << *ir <<" ";
    cout << endl;    
    
    ir=v1.erase(v1.begin(),v1.begin()+3);  
    for(;ir!=v1.end();ir++)
        cout << *ir <<" ";
return 0;        
}
/*OUTPUT->
10 100 100 100 
100 100 
3 5 4 10 100 100 
10 100 100 
5.1 erase(const_iterator q) – Deletes the element referred by ‘q’ and returns an iterator to the element followed
by the deleted element
5.2 erase(const_iterator first, const_iterator last) – Deletes the elements in the range first to last, with the 
first iterator included in the range and the last iterator not included, and returns an iterator to the element
followed by the last deleted element


*/
