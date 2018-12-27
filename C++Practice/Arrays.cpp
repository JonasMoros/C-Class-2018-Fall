#include <iostream>
using namespace std;

int main(){

int jonas[] {4, 24,1998};

cout << "Month of Birth: " << jonas[0];
cout << "Day of Birth: " << jonas[1];
cout << "Year of Birth: " << jonas[2]; 
cout << endl;

int *ptr;
ptr = jonas;

for(int i = 0; i < 3; i++){
    cout << *(ptr + i)  << endl;
}


}