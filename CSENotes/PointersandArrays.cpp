#include <iostream>

using namespace std;

int main(){

const int size = 4;
int numbers[size] = {5,10,15,20};
for(int i = 0; i < size; ++i){
    cout << numbers[i] << " " << endl;
    
}
cout << endl;
int *pnumbers = &numbers[0];
for(int i = 0; i < size; ++i){
    cout << *(pnumbers+i) << endl;
}
//cout << endl << *pnumbers << " " << *(pnumbers+1);
    return 0;
}