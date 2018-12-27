#include "Logger.h"
#include <iostream>
#include <string>
using namespace std;

Logger::Logger(){

}

Logger::Logger(string fn, string ln, string em, string pn){
    fname = fn;
    lname = ln;
    email = em;
    pnumber = pn;
}

void Logger::getFname(){
    cout << "First Name: ";
    cin >> fname;
    cout << endl;
}

void Logger::getLname(){
    cout << "Last Name:";
    cin >> lname;
}

void Logger::getEmail(){
    cout << "Enter Email: ";
    cin >> email;   
    
}

void Logger::getPhonenumber(){
    cout << "Enter Phone Number ";
    cin >> pnumber;
}

void Logger::setFname(){
    return fname;
}

void Logger::setLname(){
    return lname;
}

void Logger::setEmail(){
    return email;
}

void Logger::setPhonenumber(){
    return pnumber;
}
