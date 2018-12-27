#include <stdio.h>
#include "Node.h"

using namespace std;

//CONSTRUCTOR

Node::Node(Book b, Node* node){
    book = b;
    next = node;
}

//PUBLIC FUNCTIONS

Node*& Node::getNext(){
    //return the next node in the linkedlist
    return next;
}

void Node::setNext(Node *n){
    //sets the next node
    next = n;
}

Book& Node::getData(){
    //returns the book
    return book;
}

void Node::setData(Book b){
    //sets the book
    book = b;
}
