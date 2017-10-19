#include<iostream>

using namespace std;

/*class Student{
	Student()
	{
	}
	~Student(){}
	
}*/

int main(){
double *svalue = NULL;
if(!svalue == NULL)
{
	cout << " Svalue is assigned to a garbage value" << endl;
}

svalue = new double;
*svalue = 3.13332556;
cout << stzeof(svalue) << " " << svalue <<	endl;
delete svalue;
//double * array[4] =
return 0;	
}
