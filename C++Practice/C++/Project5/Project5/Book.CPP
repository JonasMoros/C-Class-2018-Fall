#include "Book.h"

using namespace std;

Book::Book(){
    //default constructor
    width = 0;
    height = 0;
    pages = 0;
}

Book::Book(int w, int h, int page, string t, string first, string last){
    //constructor where set all the base values of a book
    width = w;
    height = h;
    rented = false;
    title = t;
    authorFN = first;
    authorLN = last;
    pages = page;
}

int Book::getArea(){
    //returns area of the book
    return height * width;
}

string Book::toString(){
    //string to be returned
    string out = title;
    //checks if book is rented and adds the data to the string
    if(isRented())
        out += " borrowed by " + bFirst + " " + bLast;
    else
        out += " by " + authorFN + " " + authorLN + " (" + to_string(width) + "x" + to_string(height) + ", " + to_string(pages) + " pages)";
    //return string
    return out;
}

void Book::rent(int year, int day, int month, string first, string last){
    //sets the data for rented book
    rented = true;
    rentYear = year;
    rentDay = day;
    rentMonth = month;
    bFirst = first;
    bLast = last;
}

int Book::getPages(){
    //return the number of pages
    return pages;
}

bool Book::isRented(){
    //return the book rented status
    return rented;
}

void Book::bringBack(){
    //return the book
    rented = false;
}

bool Book::lessThan(Book& other){
    //checks if the book is rented
    if(isRented()){
        //checks if the data is less than the passed in book
        if(rentYear < other.rentYear)
            return true;
        else if(rentMonth < other.rentMonth && rentYear == other.rentYear)
            return true;
        else if(rentDay < other.rentDay && rentMonth == other.rentMonth && rentYear == other.rentYear)
            return true;
        else
            return false;
    }else{
        //if book isnt rented, check different data
        if(getArea() < other.getArea())
            return false;
        else if(getArea() == other.getArea() && getPages() < other.getPages())
            return false;
        else
            return true;
    }
}

string Book::getTitle(){
    //returns title
    return title;
}

int Book::getRD(){
    //returns rental day
    return rentDay;
}

int Book::getRM(){
    //returns rented day
    return rentMonth;
}

int Book::getRY(){
    //returns rented day
    return rentYear;
}

string Book::getBFN(){
    //returns first name of renter
    return bFirst;
}

string Book::getBLN(){
    //returns last name of renter
    return bLast;
}
