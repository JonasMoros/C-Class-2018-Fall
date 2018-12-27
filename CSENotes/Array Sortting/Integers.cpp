#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

//https://www.geeksforgeeks.org/cpp-program-for-recursive-bubble-sort/ 

void bubblesort(int myArray[], int n){
  for (int i = 0; i < n-1; i++)      

     // Last i elements are already in place   
     for (int j = 0; j < n-i-1; j++) 
       if (myArray[j] > myArray[j+1])
         swap(myArray[j], myArray[j+1]);
    //return myArray; 
} 

int main(){
   int myArray[100];
   int max = myArray[0];
   int min = myArray[0];
ifstream file("RandNumList.txt");
if(file.is_open()){
   
    for(int i=0; i<100; i++){
        file >> myArray[i];
    }
}

bubblesort(myArray,100);

cout << "MIN: " << myArray[0] << endl;
cout << "Smallest 3 Numbers: " << myArray[0] << ", " << myArray[1] << ", " << myArray[2] << endl;
cout << "MAX: " << myArray[99] << endl;
cout << "Largest 3 Numbers: " << myArray[99] << ", " << myArray[98] << ", " << myArray[97] << endl;

}

