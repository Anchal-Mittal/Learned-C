#include <fstream>
#include <iostream>

using namespace std;

int main()
{   char input[100];
    ofstream data;
    // Create a file Entry.txt IF NOT EXIST 
	data.open("Entry.txt");
	cout << "ENTER THE ROLL NO IN THE FILE" << endl;
     // TAKE THE INPUT ROLL NO
	cin >> input;
    cin.ignore();
    // WRITE THE INPUT INTO THE FILE Entry.txt
	data << input;
 
	cout << "ENTER THE NAME INTO THE FILE:" << endl;
	// TAKE THE INPUT NAME 
     cin.getline(input, 100);
 
     // WRITE THE INPUT INTO THE FIULE Entry.txt
	data << input;
     // CLOSE THE OPEN FILE 
	data.close();
    // CREATING THE OBJECT OF CLASS ifstream FOR READING
	ifstream infile;
     // OPEN THE FILE 
	infile.open("Entry.txt");
     //READ THE CONTENT OF THE FILE Entry.txt
    infile >> input;
    // DISPLAY THE READ DATA ONTO THE CONSOLE 
	cout << input;
     //READ THE CONTENT OF THE FILE Entry.txt
	infile >> input;
  // DISPLAY THE READ DATA ONTO THE CONSOLE
	cout << input;
 // CLOSE THE OPEN FILE 
	infile.close();
	return 0;
	
}
