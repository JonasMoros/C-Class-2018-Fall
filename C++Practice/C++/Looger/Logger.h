#ifndef Logger_h
#define Logger_h

#include <iostream>
#include <string>
using namespace std;

class Logger{
    public: 
        Logger();
        Logger(string, string, string, string);
        void getFname();
        void setFname();
        void getLname();
        void setLname();
        void getEmail();
        void setEmail();
        void getPhonenumber();
        void setPhonenumber();

    private:
        string fname;
        string lname;
        string email;
        string pnumber;


    
};
#endif