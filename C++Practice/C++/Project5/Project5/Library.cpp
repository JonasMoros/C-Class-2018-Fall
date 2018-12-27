#include "Library.h"
#include <iostream>

using namespace std;

//CONSTRUCTOR

Library::Library(string inFile){
    //initializes all the data
    shelf = BookList();
    toBeReturned = BookList();
    input.open(inFile.c_str());
    outFile1 = "bookshelf.txt";
    outFile2 = "booksOnLoan.txt";
}

//PUBLIC FUNCTIONS

void Library::readFile(){
    int numBooks;
    input >> numBooks;
    for(int i = 0; i < numBooks; i++)
    {
        string letter;
        input >> letter;
        if(letter == "A")
        {
            //add book from this line
            int w, h, p;
            string l, f, t;
            input >> w >> h >> p >> l >> f;
            getline(input, t);
            //create the book and add it in order
            Book b = Book(w, h, p, t, f, l);
            shelf.insertInOrder(b);
        }else if(letter == "L"){
            // move book from shelf to loaned
            int m, d, y;
            string l, f, t;
            input >> l >> f >> m >> d >> y;
            getline(input, t);
            //checks if the bookshelf has the book
            if(!shelf.contains(t)){
                if(toBeReturned.contains(t))
                    cout<< t<< " ALREADY LOANED OUT" << "\n";
                else
                    cout<< t<< " NOT IN LIBRARY" << "\n";
            }else{
                //if it is in the library, add it into the rental list
                Book b = shelf.giveBook(t);
                shelf.remove(t);
                b.rent(y, d, m, f, l);
                toBeReturned.insertInOrder(b);
            }
        }else if(letter == "R"){
            // move book from loaned to shelf
            string t;
            getline(input, t);
            //checks if the book is in the rental list
            if(!toBeReturned.contains(t)){
                if(shelf.contains(t))
                    cout<< t<< " ALREADY RETURNED" << "\n";
                else
                    cout<< t<< " NOT OUR BOOK" << "\n";
            }else{
                //if it is, remove it from the rental list and add it to the shelf list
                Book b = toBeReturned.giveBook(t);
                toBeReturned.remove(t);
                b.bringBack();
                shelf.insertInOrder(b);
            }
        }else{
            cout << "ERROR" << "\n";
        }
    }
    //close file
    input.close();
}

void Library::writeOut(){
    //open file for the books on the shelf
    output.open(outFile1.c_str());
    output << shelf.getSize() << "\n";
    //loop through the list of books on the shelf
    Node* front = shelf.getFront();
    int counter = 1;
    while(front != nullptr){
        //outputs the book
        output << counter << ". "<< front->getData().toString() << "\n";
        front = front->getNext();
        counter++;
    }
    output.close();
    //opens the file for the rented books
    output.open(outFile2.c_str());
    output << toBeReturned.getSize() << "\n";
    int day = 0, m = 0, y = 0;
    //loops through the rented list
    front = toBeReturned.getFront();
    counter = 1;
    while(front != nullptr){
        //outputs the rented book to the file
        if(day != front->getData().getRD() || m != front->getData().getRM() || y != front->getData().getRY()){
            day = front->getData().getRD();
            m = front->getData().getRM();
            y = front->getData().getRY();
            output << m << "/" << day << "/" << y << "\n";
        }
        output << counter << ". "<< front->getData().toString() << "\n";
        front = front->getNext();
        counter++;
    }
    //closes file
    output.close();
}
