#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> v1;
vector <int> v2;
vector <int> v3;
vector <int> :: iterator  i;
v1.assign(5,10);// assign 5 elements with the same value 10
for(i=v1.begin();i!=v1.end();i++){
    cout << *i<<" ";
}
cout << endl;
vector <int> ::iterator it;
it =v1.begin()+1;
/*while(it!=(v1.end()-1)){     
    cout << *it << " ";
    it++;
}*/
vector <int> ::iterator ite;
v2.assign(it,v1.end()-1);//because due to line 16-19 it will be incremented upto the end and contain the value 
for(ite=v2.begin();ite!=v2.end();ite++){
    cout << *ite <<" ";
}
cout << endl;
int array[3]={1,2,3};
v3.assign(array,array+2);
for(ite=v3.begin();ite!=v3.end();ite++){
  cout << *ite << " ";    
}
cout << endl<<"SIZE OF V1 " << int(v1.size())<< endl;
cout << "SIZE OF V2 " << int(v2.size())<< endl;
cout << "SIZE OF V3 " << int(v3.size())<<endl;
return 0;
}


/*output if line 16 -19 are not commented 
10 10 10 10 10 
10 10 10 
1 2 
SIZE OF V1 5
SIZE OF V2 0
SIZE OF V3 2

if we commented line 16-19 then the output 
10 10 10 10 10 
10 10 10 
1 2 
SIZE OF V1 5
SIZE OF V2 3
SIZE OF V3 2

*/
