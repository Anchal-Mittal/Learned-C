#include <iostream>
 
using namespace std;

int main() {
                       //      DECLARATION OF VARIABLES
 
int bool_var1 =60;
int bool_var2 =13;
int result_var;
 
      result_var = bool_var1  ||  bool_var2 ;// OR OPERATION
      cout  <<"RESULT OF OR OPERATION " << result_var  << " "  << endl;
       
      result_var = bool_var1  &&  bool_var2 ;// AND OPERATION
      cout  << "RESULT OF AND OPERATION "<< result_var  << " "  << endl;
    
      result_var = bool_var1  &   bool_var2 ;//BITWISE BINARY AND OPERATION
      cout << "RESULT OF BITWISE BINARY AND OPERATION "<< result_var << " " << endl;
    
      result_var = bool_var1  |   bool_var2 ;//BITWISE BINARY OR  OPERATION
      cout << "RESULT OF BITWISE BINARY OR  OPERATION  "<<result_var << " " << endl;
    
      result_var = bool_var1  ^  bool_var2 ;//BITWISE BINARY XOR OPERATION
      cout <<"RESULT OF BITWISE BINARY  XOR OPERATION " <<  result_var << " " << endl;

      bool_var1 =  bool_var1++ ;             //INCREMENT OPERATOR
      cout  <<"RESULT OF INCREMENT OPERATOR " << bool_var1  <<  endl;
  
      bool_var1= ++bool_var1 ;              //INCREMENT OPERATOR
      cout  <<  "RESULT OF INCREMENT OPERATOR " << bool_var1    <<  endl;   
    
      bool_var1 = bool_var1--;            //DECREMENT OPERATOR
      cout  <<  "RESULT OF DECREMENT OPERATOR" << bool_var1  <<  endl;
   
      bool_var1 = --bool_var1 ;              //DECREMENT OPERATOR
      cout  <<  "DECREMENT OPERATOR " << bool_var1    <<  endl;   

    return 0;

}
