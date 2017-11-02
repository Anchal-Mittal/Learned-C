#include <iostream>

using namespace std;

int main()
{
    int num1=9;
    float num2 =7;
    int result;
    char charVar='A';
    double doubleVar =9.37873;
    long longVar =67262;
    short shortVar = 67;
    unsigned int unsignedIntVar =89;
    signed int signedIntVar =-7;
    int *intPointer =&num1;
    float *floatPointer = &num2;
    char *charPointer = &charVar;
    double *doublePointer = &doubleVar;
    long *longPointer = &longVar;
    short *shortPointer =&shortVar;
    unsigned int *unsignedIntPointer =&unsignedIntVar;
    signed int * signedIntPointer =&signedIntVar;
    
     
    result = num1;
    result +=num2;
    cout << "SIZE RESULT OF ADDITION AND ASSINGMENT OPERATOR " << sizeof(result) <<  endl;
    
   cout << " SIZE OF INT POINTER " << sizeof(intPointer) << "AND   SIZE OF THE VALUE AT INT POINTER "<< sizeof(*intPointer)<< endl;
   cout << " SIZE OF Float POINTER " << sizeof(floatPointer) <<"AND SIZE OF THE VALUE AT THE FLOAT POINTER" << sizeof(*floatPointer) << endl;
   cout << " SIZE OF CHAR POINTER " << sizeof(charPointer) << "AND SIZE OF THE VALUE AT THE CHAR POINTER "<< sizeof(*charPointer) << endl;
   cout << " SIZE OF DOUBLE  POINTER " << sizeof(doublePointer) <<"AND SIZE OF THE VALUE AT DOUBLE POINTER" << sizeof(*doublePointer)<< endl;
   cout << " SIZE OF LONG  POINTER " << sizeof(longPointer)<< "AND SIZE OF THE VALUE AT LONG POINTER "<< sizeof(*longPointer) << endl;
   cout << " SIZE OF SHORT POINTER " << sizeof(shortPointer) << " AND SIZE OF VALUE AT SHORT POINTER " << sizeof(*shortPointer)<< endl;
   cout << " SIZE OF UNSIGNED INT  POINTER " << sizeof(unsignedIntPointer)<<"AND SIZE OF THE VALUE AT UNSIGNED INT POINTER" << sizeof(*unsignedIntPointer) << endl;
   cout << " SIZE OF SIGNED INT  POINTER " << sizeof(signedIntPointer) <<"AND SIZE OF THE VALUE AT SIGNED INT POINTER " << sizeof(*signedIntPointer) << endl;
   
    
    return 0;
}
