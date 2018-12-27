#include "Person.h"
#include "Student.h"
#include "Prof.h"
#include <iostream>
using namespace std;

int main(){
    Student s;
    s.setGpa(3.25);
    s.setName("Jeremy Smith");
    s.setIDNum(4631);

    Prof doc;
    doc.setName("Dr.J");
    doc.setIDNum(1002);
    doc.setOffice("Caruth 441");
    doc.print();

    Person* ptr = nullptr;
    cout << "1 for Student, 2 for Prof: ";
    int choice;
    cin >> choice;
    if(choice == 1){
        ptr = &s;
    }
    else{
        ptr = &doc;
    }
    ptr -> print();//dynamic bynding Function Call and the code to execute are linked at run time
    //static dynding the code to excexute function call is found at commpile time.
    

    


    return 0;
}