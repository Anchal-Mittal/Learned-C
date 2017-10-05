#include<iostream>

using namespace std;

enum Color{
     Red=2,
     Yellow,
     Orange,
     Violet,
     Indigo,
     Black
     };

enum Week{
     Sunday,
     Monday,
     Tuesday,
     Wednesday,
     Thursday,
     Friday,
     Saturday
     } ;    
     
enum Month {
     January,
     Febuary,
     March,
     April,
     May,
     June,
     July,
     August,
     September,
     October,
     November,
     December
     };
          
int main(){
Color color_var;
color_var=Red;
cout << "RED COLOR VALUE IS="<< color_var << endl;
color_var=Violet;
cout << "VIOLET COLOR VALUE IS=" << color_var << endl;
Week week_var;
week_var=Monday;
cout << "MONDAY VALUE IS " << week_var << endl;
return 0;
}
