#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v1;
vector<int> ::iterator i;
vector <int> :: reverse_iterator ri;
v1.push_back(10);
v1.push_back(35);
v1.push_back(20);
cout<< "THE VECTOR v1 IS ="<< endl;
for (i=v1.begin();i!=v1.end();i++)
		cout << *i<< " ";
	
cout<< "\nTHE REVERSE OF VECTOR  IS =" << endl;
for (ri=v1.rbegin();ri!=v1.rend();ri++)
		 cout<< *ri<< " ";
return 0;
}
