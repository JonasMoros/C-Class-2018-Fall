#include "List.h"

List::List():head(nullptr) {}

void List::addStudent(Student& s){
    Node* theStudent = new Node(s);
    if(head == nullptr){
        head = theStudent;
    }
    else{
         theStudent->setNext(head);
         head = theStudent;
    }
}

void List::print(){
    Node* curr = head;
    while(curr != nullptr){
        curr->getData().print();
        curr = curr->getNext();
    }
}