#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person{
    protected:
        string name;
        int idnum;
    public:
        Person(){
            cout << "In Person Constructor" << endl;
        }
        void setName(string n){
            name = n;
        }
        void setIDNum(int num){
            idnum = num;
        }
        string getName(){
            return name;
        }
        int getIDNum(){
            return idnum; 
        }
        virtual void print() = 0;
        //this method print is a pure virtual function
        //Any class that has a pure vitual function is considered an abstract class
        //you cannot enstanchiate an abstract class;

};

#endif 