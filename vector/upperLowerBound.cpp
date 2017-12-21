// lower_bound and upper_bound in vector
#include <iostream>
#include <algorithm> // for lower_bound, upper_bound and sort
#include <vector>	 // for vector

using namespace std;

int main ()
{
	int array[] = {5,6,7,17,6,5,5,6};
	
	vector<int> v(array,array+8); // 5 6 7 17 6 5 5 6

	sort (v.begin(), v.end()); // 5 5 5 6 6 6 7 17

	vector<int>::iterator lower,upper,lower1,upper1;
	lower = lower_bound (v.begin(), v.end(), 10); 
	upper = upper_bound (v.begin(), v.end(), 6); 
	lower1 = lower_bound (v.begin(), v.end(), 6); 
	upper1 = upper_bound (v.begin(), v.end(), 10); 
  cout << "lower_bound for 10 at position " << (lower- v.begin()) << '\n';
	cout << "lower_bound for 6 at position " << (lower1- v.begin()) << '\n';
	cout << "upper_bound for 10 at position " << (upper1- v.begin()) << '\n';
	cout << "upper_bound for 6 at position " << (upper - v.begin()) << '\n';

	return 0;
}
/*OUTPUT->
lower_bound for 10 at position 7
lower_bound for 6 at position 3
upper_bound for 10 at position 7
upper_bound for 6 at position 6

lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less 
than ‘val’.
 
upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater
than ‘val’.
 
 
