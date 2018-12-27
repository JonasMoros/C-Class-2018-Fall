#include "Student.h"
#include "Node.h"
#include "List.h"
#include <iostream>

using namespace std;

int main(){
    Student s1("Johnny");
    s1.setTest(99, 98, 97);
    Student s2("Jennie");
    s2.setTest(99, 98, 99);

    Node* n1 = new Node(s1);
    Node* n2 = new Node(s2);
    List l;
    l.addStudent(s1);
    l.addStudent(s2);
    l.print();
    return 0;
}