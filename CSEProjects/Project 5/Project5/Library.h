#ifndef Library_h
#define Library_h

#include "BookList.h"
#include <fstream>

using namespace std;

class Library{
//public functions
public:
    Library(string inFile);
    void readFile();
    void writeOut();
//private data members
private:
    BookList shelf;
    BookList toBeReturned;
    ifstream input;
    ofstream output;
    string outFile1;
    string outFile2;
    
};
#endif
