#include<vector>
#include<iostream>
using namespace std;
int main(){
	vector <int> foo(3,100);//3 integer each has the value of 100
	vector <int> bar(2,200);//2 integer with the value of
	vector <int> soo(3,150);
	vector <int> far(3,200);
	vector <int> sar(3,100);
	if(foo==bar)cout <<" foo is equal to bar "<< endl;
	if(foo>bar)cout <<" foo is greater than bar "<<endl;
	if(foo<bar)cout <<" foo is less than bar "<<endl;
	if(foo!=bar)cout << " foo is not equal to bar"<< endl;
	if(foo<=bar)cout << " foo is less than or equal to bar"<< endl;
	if(foo>=bar)cout << " foo is greater than or equal to bar"<< endl;
	cout<<endl;

	if(soo==bar)cout <<" soo is equal to bar "<< endl;
	if(soo>bar)cout <<" soo is greater than bar "<<endl;
	if(soo<bar)cout <<" soo is less than bar "<<endl;
	if(soo!=bar)cout << " soo is not equal to bar"<< endl;
	if(soo<=bar)cout << " soo is less than or equal to bar"<< endl;
	if(soo>=bar)cout << " soo is greater than or equal to bar"<< endl;
	cout <<endl;

	if(foo==far)cout <<" foo is equal to far "<< endl;
	if(foo>far)cout <<" foo is greater than far "<<endl;
	if(foo<far)cout <<" foo is less than far "<<endl;
	if(foo!=far)cout << " foo is not equal to far"<< endl;
	if(foo<=far)cout << " foo is less than or equal to far"<< endl;
	if(foo>=far)cout << " foo is greater than or equal to far"<< endl;
	cout << endl;
	
	if(foo==sar)cout <<" foo is equal to sar "<< endl;
	if(foo>sar)cout <<" foo is greater than sar "<<endl;
	if(foo<sar)cout <<" foo is less than sar "<<endl;
	if(foo!=sar)cout << " foo is not equal to sar"<< endl;
	if(foo<=sar)cout << " foo is less than or equal to sar"<< endl;
	if(foo>=sar)cout << " foo is greater than or equal to sar"<< endl<<endl;

return 0;
}
/*
  for less than we compare the value and first value result indicate the result

  for equality no.of elements and value should be same
*/
