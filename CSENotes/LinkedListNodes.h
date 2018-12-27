#include "LinkList.h"
//#include <iostream>
#ifndef LINKEDLISTNODES_H
#define LINKEDLISTNODES_H
using namespace std;

class LinkedList{
    private:
        Node* front;
    public:     
        LinkedList(){
            front = nullptr;
        }
        void pushFront(int x){
            Node* temp = new Node(x);
            temp -> setNext(front);
            front = temp;
        }
        void printList(){
            Node* current = front;
            while(current != nullptr){
            cout << current -> getData() << endl;
            current = current-> getNext();

            // current-> getNext();
            // (*current).getNext();
            // //same thing ^
            }
        }
};

#endif
