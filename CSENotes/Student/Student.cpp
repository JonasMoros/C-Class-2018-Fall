#include "Student.h"


void Student::setName(string newName)
{
    name = newName;
}

void Student::setT1(int grade)
{
    t1 = grade;
}

void Student::setT2(int grade){
    t2 = grade;
}

void Student::setT3(int grade){
    t3 = grade; 
}

string Student::getName(){
    return name;
}

int Student::getT1(){
    return t1;
}
int Student::getT2(){
    return t2;
}
int Student::getT3(){
    return t3;
}
double Student::getAverage(){
    double sum = t1 + t2 + t3;
    double avg = sum/3.0;
    return avg; 
}