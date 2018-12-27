#include "BookList.h"
#include <iostream>

using namespace std;

//PUBLIC FUNCTIONS

BookList::BookList(){
    head = nullptr;
}

void BookList::pushFront(Book book){
    //adds node to the front of the list
    Node* n = new Node(book);
    n -> setNext(head);
    head = n;
}

void BookList::printList(){
    //iterates through the list and prints out the data
    Node* current = head;
    while(current!= nullptr){
        cout << current -> getData().toString() << "\n";
        //sets the current node to the next one
        current = current -> getNext();
    }
}

void BookList::insertInOrder(Book book){
    //creates the node to add to the list
    Node* add = new Node(book);
    
    //find the correct spot to place the node in the list
    if(head == nullptr){
        pushFront(book);
    }else if( !head->getData().lessThan(book)){
        pushFront(book);
    }else{
        Node* current = head;
        Node* previous = nullptr;
        while(current != nullptr && current->getData().lessThan(book)){
            previous = current;
            current = current->getNext();
        }
        //adjust the pointers so the link is added
        add->setNext(current);
        previous -> setNext(add);
    }
}

int BookList::getSize(){
    //iterates through the list and counts the size
    Node* current = head;
    int count = 0;
    while(current != nullptr){
        count++;
        current = current->getNext();
    }
    return count;
}

void BookList::remove(string title){
    if(head == nullptr){
        return;
    }else if(head->getData().getTitle() == title){
        //removes front node by setting head equal to the next node
        head = head->getNext();
    }else{
        //iterate over the list until book to remove is found
        Node* current = head;
        Node* previous = nullptr;
        while(current != nullptr && !(current->getData().getTitle() == title)){
            previous = current;
            current = current->getNext();
        }
        if(current == nullptr){
            //if book was not found, return
            return;
        }else{
            //adjust pointers to remove the book
            previous->setNext(current->getNext());
            if(previous->getNext()!= nullptr){
                Node* test = previous->getNext();
                cout << test->getData().toString() << "\n";
            }
            //delete the book
            if(current != nullptr){
                delete current;
            }
        }
    }
}

bool BookList::contains(string title){
    if(head == nullptr){
        return false;
    }else if(head->getData().getTitle()== title){
        //if the head is the book being looked for, return true
        return true;
    }else{
        //iterate over list looking for the book title
        Node* current = head;
        while(current != nullptr){
            if(current->getData().getTitle() == title)
                return true;
            
            current = current->getNext();
        }
        //return false if it wasnt found
        return false;
    }
}

Book BookList::giveBook(string title){
    //loops through the list looking for book title
    Node* current = head;
    while(current != nullptr && !(current->getData().getTitle() == title)){
        current = current->getNext();
    }
    //if it wasnt found, return a default book
    if(current == nullptr){
        return Book();
    }else{
        //else, return the book found
        return current->getData();
    }
}

Node* BookList::getFront(){
    //returns front of the list
    return head;
}
