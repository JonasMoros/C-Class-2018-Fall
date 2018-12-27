#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    int M;
    int D;
    int Y;
    Date d1(D,M,Y);

    cout << "Enter Month: " << endl;
    cin >> M;
    cout << "Enter Day: " << endl;
    cin >> D;
    cout << "Enter Year: " << endl;
    cin >> Y;
    d1.nextDay(D,M,Y);
    cout << endl;
    d1.toString(M,D,Y);

    
    return 0;
}