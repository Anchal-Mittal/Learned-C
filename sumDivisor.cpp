//===============================SUM OF ALL THE DIVISOR OF THE NUMBER=====================================================
#include<iostream>
using namespace std;

//==========================================SUM THE DIVISOR OF A NUMBER===================================================

void sumAllDivisor(int num){
    int temp=0;
    int result=0;
    int resultArray[10];
    resultArray[temp]=num;
    for(int i=1;i<=num;++i){
        if(num % i==0){
            resultArray[++temp]=i;
            num=num/i;
         }
    }
   
    cout << "THE SUM OF ALL DIVISOR OF A NUMBER"<< endl;
    for(int i=0;i<=temp;i++)
         result=resultArray[i]+result;
    cout << result;    
}

//================================================MAIN FUNCTION===========================================================

int main(){
    int num;
    cout << "ENTRE THE NUMBER "<< endl;
    cin >> num;
sumAllDivisor(num);
return 0;
}
