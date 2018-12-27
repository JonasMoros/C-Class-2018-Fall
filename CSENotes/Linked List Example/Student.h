#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student{
    private:
    int test1, test2, test3;
    string name;

    public: 
        Student(string ="");
        int getTest1();
        int getTest2();
        int getTest3();
        double getAverage();
        void setTest(int,int,int);
        void print();
};

#endif