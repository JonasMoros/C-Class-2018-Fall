#include "Student.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    vector<Student> roster;
    Student s1; 
    string tempName;
    int tempgrade;
    int numStudents;
    fstream input ("Students.txt");
    if(!input){
        return -1;
    }
    input >> numStudents;
    for(int i = 0; i < numStudents; i++){
        input >> tempName;
        s1.setName(tempName);
        input >> tempgrade;
        s1.setT1(tempgrade);
        input >> tempgrade;
        s1.setT2(tempgrade);
        input >> (tempgrade);
        s1.setT3(tempgrade);
        roster.push_back(s1);
    }
    // s1.setName("Mark");
    // s1.setT1(97);
    // s1.setT2(56);
    // s1.setT3(93);
    // roster.push_back(s1);
    // s1.setName("Bob");
    // s1.setT1(100);
    // s1.setT2(100);
    // s1.setT3(100);
    // roster.push_back(s1);
    for(int i = 0; i < roster.size(); i++){
    cout << roster[i].getName() << " has an average of " 
          << roster[i].getAverage() << " for the term." << endl;
    }
          return 0;
}