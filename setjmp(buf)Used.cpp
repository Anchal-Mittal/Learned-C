//CPP program to print one 100 times with using macro , recursion & buffer

#include <iostream>
#include <setjmp.h>
using namespace std;

jmp_buf buf;

int main(){
    
    int num=1;
    
    // set jump position using buf
    setjmp(buf);
    
    cout << "1";//prints 1
    
    num++;
    if(num<=100)
 
        // jump to the point setup by setjmp
        longjmp(buf,1);
    
    return 0;
       
}
