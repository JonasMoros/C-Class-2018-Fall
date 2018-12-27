#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
using namespace std;

class Student: public Person{
private:  
    double gpa;
public:
    Student(){
        cout << "In Student Constructor" << endl;
    }
    void setGpa(double g){
        gpa = g;
    }
    double getGpa(){
        return gpa;
    }
    virtual void print(){
        cout << getName() << endl;
        cout << getIDNum() << endl;
        cout << gpa << endl;
    }

};
#endif 