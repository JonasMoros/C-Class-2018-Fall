#include "Student.h"
#include <iostream>
using namespace std;
Student::Student(string n){
    name = n;

}
int Student::getTest1(){
    return test1;
}
int Student::getTest2(){
    return test2;
}
int Student::getTest3(){
    return test3;
}

void Student::setTest(int a, int b, int c){
    test1 = a;
    test2 = b;
    test3 = c;
}

double Student::getAverage(){
    return (test1 + test2 + test3) / 3.0;
}

void Student::print(){
    cout << name << " " << getAverage() << endl;
}
