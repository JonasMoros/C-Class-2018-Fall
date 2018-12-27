#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main ()
{ 
   string fileName;
   cout << "Enter Filename: " << endl;
   cin >> fileName;
   while(fileName != "unemp.txt"){
      cout << "Error wroung file please retenter!" << endl;
      cin >> fileName;
   }
   ifstream input(fileName.c_str());
   string nolike;
   getline(input, nolike);
      int year;
      input >> year;
   while(!input.eof()){
      double  sum = 0;
      double temp;
      for(int i=0; i < 12; i++){
         input >> temp;
         sum += temp;

      }
      
      
      double average = sum / 12.0; 
      cout << "The average unemployment for year " << year <<  " is "<< setprecision(3) << average << endl;
    input >> year;
}
   
   
   input.close();
   return 0;
}
