#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> gl;
	for (int i = 1; i <= 5; i++)
		gl.push_back(i);
	cout << "USE OF REFERENCE OPERATOR [gl] " << gl[2]<< endl;
	cout <<"USE OF at(g) "<< gl.at(2) << endl;
	cout << "USE OF front " << gl.front()<< endl;
	cout << "USE OF back " << gl.back()<< endl;
	return 0;

}
/*
Output: 
USE OF REFERENCE OPERATOR [gl] 3
USE OF at(g) 3
USE OF front 1
USE OF back 5
Accessing the elements
1. reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
2. at(g) – Returns a reference to the element at position ‘g’ in the vector
3. front() – Returns a reference to the first element in the vector
4. back() – Returns a reference to the last element in the vector
*/
