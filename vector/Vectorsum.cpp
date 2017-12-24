#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector <int> v1;
int sum = 0;
v1.push_back(10);
v1.push_back(20);
v1.push_back(30);
vector <int> v2;
v2.push_back(10);
v2.push_back(20);
v2.push_back(30);
v2.push_back(40);

while (!v1.empty()&&!v2.empty())
{
	sum=sum+v1.back()+v2.back();
	v1.pop_back();
	v2.pop_back();
}
while(!v2.empty()){
    sum=sum+v2.back();
    v2.pop_back();
}
while(!v1.empty()){
    sum=sum+v1.back();
    v1.pop_back();
}
cout << "The sum of the elements of two vector is : "
	<< sum << '\n';

return 0;
}
