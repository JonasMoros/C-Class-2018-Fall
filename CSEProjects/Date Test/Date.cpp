#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(){
month = 0;
day = 0;
year = 0;
}
Date::Date(int M, int D, int Y){
    month = M;
    day = D;
    year = Y;
}

void Date::getDay(int d){
    if(d < 1 && d > 31){
        cout << d << " is not in range" << endl;
    }
    else day = d;
}

void Date::getMonth(int m){
    if(m > 12 && m < 1){
        cout << m << " is not inn range" << endl;
    }
    else month = m;
}
void Date::getYear(){
     year = 2018;
}
void Date::nextDay(int da, int mm, int y){
    day = da;
    year = y;
    month = mm;
    if(da > 30 || day == 30){
        da = 1;
        mm++;
        if(mm > 12 || mm == 12){
            mm = 1;
            y++;
        }
    }else da++;
    cout << "Next Day: " << da << "/" << mm << "/" << y;
}   
void Date::toString(int month, int day, int year){
    cout << month << "/" << day <<"/" << year;
}




