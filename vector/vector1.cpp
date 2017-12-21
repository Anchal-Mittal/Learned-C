#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> gl;
vector <int> :: iterator i;
vector <int> :: reverse_iterator ir;

for (int i = 1; i <= 5; i++)
        gl.push_back(i);

for( i=gl.begin();i!=gl.end();++i)
   cout << *i<<" ";

cout << endl;
for(ir=gl.rbegin();ir!=gl.rend();ir++)
	cout <<*ir<< " " ;
return 0;
}
