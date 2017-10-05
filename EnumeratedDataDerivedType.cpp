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
color_var = Red;
cout << " RED COLOR VALUE IS ="  << color_var << endl;
color_var = Violet;
cout << " VIOLET COLOR VALUE IS=" << color_var << endl;
Week week_var;
week_var = Monday;
cout << " MONDAY VALUE IS " << week_var << endl;
switch (week_var){
	case 0 : cout << "TODAY IS SUNADAY" << endl ;		
	                 break;	
	case 1 : cout << "TODAY IS MONADAY" << endl ;
                      break;
          //if we remove the break then all further cases will do operation before checking any cases
	case 2 : cout << "TODAY IS TUESDAY" << endl ;
		             break;
	case 3 : cout << "TODAY IS WEDNESDAY" << endl ;
		             break;
	case 4 : cout << "TODAY IS THURSDAY" << endl ;
 		             break;
	case 5 : cout << "TODAY IS FRIDAY" << endl ;
		             break;
	case 6 : cout << "TODAY IS SATURDAY" << endl ;	

}
return 0;
}
