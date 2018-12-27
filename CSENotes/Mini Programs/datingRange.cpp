#include <iostream> 

using namespace std;

void datingRange(int age, int& maxage, int& minage){
    maxage = (age-7)*2;
    minage =(age/2)+7;

}

int main(){
    int age;
    int maxage = 0;
    int minage = 0;
    cout << "Please enter in your age: ";
    cin >> age;
    datingRange(age,maxage,minage);
    cout << "You dating rage at the age of " << age << " is " << minage << " to " << maxage;
    return 0;

   
    }