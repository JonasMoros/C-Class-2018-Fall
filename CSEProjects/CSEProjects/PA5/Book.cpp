 #include <iostream>
#include "Book.h"
using namespace std;

Book::Book(int w, int h, int p, string f, string l, string t, bool l){
width = w;
height = h;
pages = p;
fname = f;
lname = l;
title = t; 
loaned = false;


}
void Book::rented(int m, int d, int y, string f, string l){
    rentMonth = m;
    rentDay = d;
    rentYear = y;
    rfname = f;
    rlname = l;

}

int Book::getArea(){
    return width * height;
}
int Book::compareOne(Book param, bool loan){
    if(loan){
        if(rentYear > param.rentYear()){
            return 1;
        }else if (rentYear == param.rentYear()){
            if (rentMonth > param.rentMonth()){
                return 1;
            }else if (rentMonth == param.rentMonth()){
                if(rentDay > param.rentDay()){
                    return 1;
                }else if (rentDay == param.rentDay()){
                    return 0;
                }else{
                    return -1;
                }
            }else{
                return -1;
            }
        }else{
            return -1;
        }
    }else{
        if(getArea() > param.getArea()){
            return 1;
        }
        else if(getArea() == param.getArea()){
            if(getPages() > param.getPages()){
                return 1;
            }
            else if(getPages() == param.getPages()){ 
            if()
            }

        }else{
            return -1;
        }
    }
}

int Book::getPages(){
    return pages;
}


string Book::getTitle(){
    return title;
}