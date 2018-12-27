#ifndef Book_h
#define Book_h

#include <string>

using namespace std;

class Book{
//public functions
public:
    Book();
    Book(int, int, int, string, string, string);
    int getArea();
    string toString();
    void rent(int, int, int, string, string);
    int getPages();
    bool isRented();
    void bringBack();
    bool lessThan(Book&);
    string getTitle();
    int getRD();
    int getRM();
    int getRY();
    string getBFN();
    string getBLN();
    
//privare member variables
private:
    int width;
    int height;
    int rentYear;
    int rentDay;
    int rentMonth;
    bool rented;
    string title;
    string authorFN;
    string authorLN;
    string bFirst;
    string bLast;
    int pages;
};
#endif
