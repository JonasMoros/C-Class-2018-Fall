#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    //create the library
    Library library = Library("BookList.txt");
    //read file then write out
    library.readFile();
    library.writeOut();
    return 0;
}
