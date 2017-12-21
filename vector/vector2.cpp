#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> gl;

for (int i = 0; i < 5; i++)
        gl.push_back(i);
cout << "SIZE "<<gl.size() << endl;
cout << "CAPACITY "<< gl.capacity()<< endl;
cout << "MAXIMUM " << gl.max_size()<< endl;
return 0;
}
/*
Output:
SIZE 5
CAPACITY 8
MAXIMUM 4611686018427387903
1. size() – Returns the number of elements in the vector
2. max_size() – Returns the maximum number of elements that the vector can hold
3. capacity() – Returns the size of the storage space currently allocated to the
 vector expressed as number of elements
 
*/
