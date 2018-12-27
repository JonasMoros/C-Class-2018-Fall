#ifndef BookList_h
#define BookList_h

#include "Node.h"

using namespace std;

class BookList{
//public functions
public:
    BookList();
    void pushFront(Book x);
    void printList();
    void insertInOrder( Book x);
    int getSize();
    void remove(string title);
    Book giveBook(string title);
    bool contains(string title);
    Node* getFront();
//private data members
private:
    Node* head;
};
#endif
