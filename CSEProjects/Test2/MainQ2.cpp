//Jonas Moros
#include <iostream>
#include "Q2Hfile.h"

using namespace std;

int main(){
    Set s1;
    Set s2;
    //checks to see if sets are empty
    if(s1.isEmpty()){
        cout << "S1 is empty" << endl;
    }
    if(s2.isEmpty()){
        cout << "S2 is empty" << endl;
    }
    //adds item 25 to s1
    s1.addItem(25);
    //checks to see if s1 contains 25 and outputs a message if it does.
    if(s1.contains(25)){
        cout << "S1 has 25 inside" << endl;
    }
    s2.addItem(20);
    if(s2.contains(20)){
        cout << "S2 has 20 inside" << endl;
    }
    if(s1.equals(s2)){
        cout << "S1 and S2 are equal " << endl;
    }
    else{
        cout << "S1 and S2 are not equal" << endl;
    }
    //removes item from set 2
    s2.remove(20);
    s2.addItem(25);
    if(s1.equals(s2)){
        cout << "S1 and S2 are equal" << endl;
    }
    s1.remove(25);
    s2.remove(25);
    s2.addItem(5);
    s1.addItem(5);
    if(s1.contains(5)){
        cout << "S1 contains 5" <<endl;
    }
    if(s2.contains(5)){
        cout << "S2 contains 5" << endl;
    }
    //Test case to see if both sets are equal to each other
    if(s1.equals(s2)){
        cout << "S1 equals S2" << endl;
    }
    else{
        cout << "S1 does not equal S2" << endl;
    }
    s1.remove(5);
    s2.remove(5);
    if(s1.isEmpty()){
        cout << "S1 is Empty" << endl;
    }
    if(s2.isEmpty()){
        cout << "S2 is Empty" << endl;
    }
    s1.addItem(3);
    s1.addItem(6);
    s1.addItem(9);
    s1.addItem(12);
    s2.addItem(2);
    s2.addItem(4);
    s2.addItem(6);
    s2.addItem(8);
    s2.addItem(10);
    s2.addItem(12);
    //creates new sets containing the intercestion and union
    Set s3 = s1.getIntersection(s2);
    Set s4 = s1.getUnion(s2);
    //checks to see if these sets work.
    if(s4.contains(3) && s4.contains(2)){
        cout << "Union Works" << endl;
    }
    if(s3.contains(12) && s3.contains(6)){
        cout << "Intersection Works" << endl;

    }
    cout << "This is the Intersection Set(S3) for S1 and S2: ";
    for(int i = 0; i < s3.getSize(); i++){
        cout << s3.getItem(i) << ", ";
    }
    cout << endl;
    cout << "This is the Union Set(S4) for S1 and S2: ";
    for(int i = 0; i < s4.getSize(); i++){
        cout << s4.getItem(i) << ", ";
    }
    cout << endl;
    s2.addItem(14);
    //Test Case to See items in Sets 
    cout << "Items in S1: ";
    for(int i = 0; i < s1.getSize(); i++){
        cout << s1.getItem(i) << ", ";
            }
    cout << endl;
    cout << "Items in S2: ";
    for(int i = 0; i < s2.getSize(); i++){
        cout << s2.getItem(i) << ", ";
    }
    cout << endl;
    cout << "Size of S1 is: ";
    //Test case to see size of each set 
    cout << s1.getSize() << endl;
    cout << "Size of S2 is: ";
    cout << s2.getSize();

    



    return 0;


}