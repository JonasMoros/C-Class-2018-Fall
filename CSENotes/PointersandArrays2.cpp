#include <iostream>
using namespace std;

// int main(){
//     int fish = 5;
//     cout << &fish << endl; //memory address where fish is located


//     int *fishPointer;
//     fishPointer = &fish;

//     cout << fishPointer << endl;

//     return 0; 
// }
void passByValue(int x);
void passByReference(int *x);
int main(){
    int jonas = 20; 
    int jack = 20;

    passByValue(jonas);
    passByReference(&jack); 

    cout << "Jonas is now " << jonas << endl;
    cout << "Jack is now " << jack << endl;

    return 0;
}

void passByValue(int x){//passes a copy of jonas 
    x = 99;
}

void passByReference(int *x){//changed value of jack passed jacks memory address
    *x = 66;
}