#ifndef PROF_H
#define PROF_H
#include <iostream>
using namespace std;

class Prof: public Person{
    private:
        string office;
    public:
        string getOffic(){
            return office;
        }
        void setOffice(string o){
            office = o;
        }
        virtual void print(){
        cout << getName() << endl;
        cout << getIDNum() << endl;
        cout << office << endl;
    }
};
#endif