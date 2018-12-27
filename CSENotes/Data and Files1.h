//alternatice places that data can come and go A.K.A files
/*
#include <fStream> //  
ifstream -- Reading Files ifstream input("data.txt"); 
if(!input){ cout << "ERROR!" << endl; return 0;}

ofstream - writing  Files -- ofstream output ("data2.text")



*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

int main()
{
	ofstream output;
	string fileName;
	cout << "Please enter file name: ");
	cin >> fileName; 
	
	output,open(fileName.c_str());
	//output.open("data.txt");
	
	for(int i = 0; i < 10; i++){
		output << i << endl;
	}
	
	
	
	output.close();
	return 0; 
}