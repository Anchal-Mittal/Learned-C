#include <iostream>

using namespace std;

   //DEFINATION OF POWER FUNCTION
 
 int pow(int num, int exp){
   
	if(exp = = 0)
			  return 1;
	int  temp = pow(num,exp/2);
	if(exp % 2 = = 0)
	      return (temp * temp);
  else 
	      return num * temp * temp; 

}

int main(){
int num = 5;
int exp = 3;
int result = pow(5,3);	
cout << "THE RESULT WILL be " << result;
return 0;
}
