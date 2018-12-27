#ifndef Node_h
#define Node_h

#include "Book.h"

using namespace std;

class Node{
//public functions
public:
    Node(Book, Node* = nullptr);
    Node*& getNext();
    void setNext(Node*);
    Book& getData();
    void setData(Book);
//private data members
private:
    Book book;
    Node* next;
};
#endif
