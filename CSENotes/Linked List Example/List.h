#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include "Student.h"

class List{
    private:
        Node* head;

    public:
        List();
        void addStudent(Student&);
        void print();

};
#endif