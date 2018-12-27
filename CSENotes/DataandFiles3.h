#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
ifstream input
int sum = 0; 
double average = 0.0;
int numStudents = 0; 
string fileName;
cout << "Enter the name of the file: ";
cin >> fileName;

input.open(fileName.c_str());

if(!input)
{
cout << "Houston , we have a problem!!!" << endl;
return 0;
}

int temp = 0;
while( input >> temp){
	numStudents ++;
	sum += temp;
}



 

average = sum / (double)numStudents;

cout << "The average of the "
<< numStudents << " exams is " 
<< average << endl;

input.close(); 


return 0;
}