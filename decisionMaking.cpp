# include <iostream>

using namespace std;

int add (int , int);

int main(){
// DECLARATION OF VARIABLES	
int sub_marks1 , sub_marks2 ,tot_marks;

// INITIALIZATION OF VARIABLES

sub_marks1 = 20;
sub_marks2 = 60;	
	
// CALLING A FUNCTION ADD THAT WILL RETURN TOTAL MARKS	

tot_marks = add( sub_marks1 ,sub_marks2);

if (tot_marks < 30 ){
    cout << " STUDENT IS NOT PASSED " <<  endl;
}
else if ((30 < tot_marks ) && (tot_marks < 50 ))
    cout << " STUDENT IS JUST PASSED " << endl;
	
else if ((50 < tot_marks ) && (tot_marks < 80 ))
	cout << "STUDENT SCORED AS AVERAGE " << endl;
	
else 
	cout << "STUDENT SCORED AS EXCELLENTLY "<< endl; 

return 0;
}

int add ( int sub_marks1 , int sub_marks2){
return sub_marks1 + sub_marks2;
}
