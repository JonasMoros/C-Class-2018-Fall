// Class book
// boolean loaned
// string return date
// int area of cover
// string author
// string title 
// int pages 

// 1. bookshelf.txt – a file containing all of the books that should be on the bookshelf in the
// order in which they would appear on the bookshelf (largest to smallest). The first line of
// the file should contain the number of books on the bookshelf.

// 2. booksOnLoan.txt – a file containing all of the books that are on loan in the order in which
// they are to be returned (soonest should be first). The first line of the file should contain
// the number of books currently on loan. 

//insert 
//newnode -> next = c-> next;
//c -> next = new node;
//previous = current;
//current -> next;


// //class ListNode{
// private:
//     ListNode* next;
//     Book b;
// }

// class llist{
//     Listnode* front;
// }

#include <iostream>
#include <string>

class Book{
    private: 
        int width;
        int hight;
        int pages;
        string fname;
        string lname;
        string rfname;
        string rlname;
        string title; 
        int rentYear;
        int rentDay;
        int rentMonth;
        bool loaned;
    public:
        Book(int,int,int,string,string,string,bool);
        int getArea();
        int getPages(); 
        string getTitle();
        void rented(int, int, int, string, string);
        int compareOne(Book, bool);
        string print();

    
    
    


};
