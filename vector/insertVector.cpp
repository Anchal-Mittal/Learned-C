#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> v1(3, 10);
	vector <int> :: iterator it;
	it = v1.begin();
	it = v1.insert(it, 20);
  cout << *it<< endl;
  for(;it!=v1.end();it++)
         cout << *it << " ";
  cout <<endl;
  it=v1.insert(v1.begin(),3,90);
  for(;it!=v1.end();it++)
         cout << *it << " ";
  cout << endl;     
  int array[10]={6,8,9,4,9,6,5};
  it=v1.insert(v1.begin()+1,array+2,array+3);
  for(;it!=v1.end();it++)
         cout << *it << " ";
 return 0;   
}
/*OUTPUT
20
20 10 10 10 
90 90 90 20 10 10 10 
9 90 90 20 10 10 10 
4.1 insert(const_iterator q, const value_type g) – Adds element ‘g’ before the element referenced by iterator ‘q’
and returns an iterator that points to the newly added element
4.2insert(const_iterator q, size_type n, const value_type g) – Adds ‘n’ elements each with value ‘g’ before the
element currently referenced by iterator ‘q’ and returns an iterator that points to the first of the newly added 
elements
4.3 insert(const_iterator q, InputIterator first, InputIterator last) – Adds a range of elements starting from first 
to last, the elements being inserted before the position currently referred by ‘q’


*/
