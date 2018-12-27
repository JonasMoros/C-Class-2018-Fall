#include <iostream>
using namespace std;

void factorCount(int x , int& a){
    int num = x;
    a = 0;
for(int i = 1;  i <= x; i++){
    if(x%i==0){
        cout << i << ", ";
        a++;
    }
}
//cout << x << endl;
}

int main(){
    int amount = 0;
    int num;
   cout << "Enter a number: ";
    cin >> num;
    factorCount(num,amount);
    cout << endl;
    cout << num << " has a factoral value of: "<< amount;
    return 0;

}

//james bond and 007 are two different names for the same thing. AKA pass by reference