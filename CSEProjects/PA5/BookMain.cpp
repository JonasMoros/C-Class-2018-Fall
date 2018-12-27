#include <iostream>
#include <fstream>
#include "PLibrary.h"

using namespace std;

int main(){
    ifstream infile;
    string info;
    int n;
    infile.open("booklist.txt");
    infile >> n;
    for(int i = 0; i < n; i++){
        getline(info,'/n');
        label, name, author, = info.split(" ")
        book = Book(name, author, )
        if label = 'A':
            booklist.add(book)
        else:
            bookohloan



    }

}
