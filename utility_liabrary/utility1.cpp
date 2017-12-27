
#include <iostream>
#include <utility>
using namespace std;

int main () {
    /*float foo[4]={90,98,78};
   int bar[] = {100,200,300,400};
   swap(foo,bar);***ERROR CAN NOT SWAP TWO DIFFERENT DATA TYPES */
   
   int foo[4]={90,98,78,67};
   int bar[] = {100,200,300,400};
   swap(foo,bar);//swap the content of foo and bar

   cout << "foo contains:";
   for (int i: foo) cout << ' ' << i;
   cout << '\n';

   cout << "bar contains:";
   for (int i: bar) cout << ' ' << i;
   return 0;
}
