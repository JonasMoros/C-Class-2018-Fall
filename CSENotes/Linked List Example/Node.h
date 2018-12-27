#ifndef NODE_H
#define NODE_H
#include "Student.h"
using namespace std;

class Node{
    private: 
        Student data;
        Node* next;
    public:
        Node();
        Node(Student&);
        Student& getData();
        void setData(Student&);
        void setNext(Node*);
        Node* getNext();


};
#endif