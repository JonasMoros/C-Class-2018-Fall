//Jonas Moros
#include "Q2Hfile.h"
Set::Set(){
    info = new int[100]; //makes the array of 100 ints
    for(int i = 0; i < 100; i++)
        info[i] = 0; //sets all values to 0
    
    size = 0; //sets size to zero 
}

void Set::addItem(int item){
    if(!(*this).contains(item)){//calls contain function 
        info[size] = item; // puts item into array
        size++; //increments the size int becuase a value was added
    }
}
//function checks info array to see if item is already in array
bool Set::contains(int item){
    bool contain = false;
    for(int i = 0; i < size; i++){//loops through array 
        if(info[i] == item){//if info is = to item at index i 
            contain = true;
        }
    }
    return contain;
}

bool Set::isEmpty(){
    if(size == 0) //returns true if no elements have been added
        return true;
    else
        return false;  
}

void Set::remove(int item){
    if((*this).contains(item)){ //checks if the int is contained in the array
        int t = -1;
        for(int i = 0; i < size; i++){ //gets index of info 
            if(info[i] == item){
                t = i;
            }
        }
        for(int i = t; i < size-1; i++){
            info[i]=info[i+1]; //shifts all the numbers over to replace the removed int
        }
        size--;
    }
}

bool Set::equals(Set& other){
    if(size != other.size){
        return false;
    }
    else{
        for(int i = 0; i < size; i++){
            if(!other.contains(info[i])){ //checks all the values of both sets 
                return false;
            }
        }
        return true;
    }
}

Set Set::getIntersection(Set& s2){
    Set intersec;
    for(int i = 0; i < size; i++){ 
        if(s2.contains(info[i])) //loops through arrays and finds ints contained in both arrays
            intersec.addItem(info[i]);
    }
    return intersec;
}

Set Set::getUnion(Set& s2){
    Set u;
    for(int i = 0; i < size; i++){ //adds all the values of first array
        u.addItem(info[i]);
    }
    for(int i = 0; i < s2.size; i++){ //adds all the values of second array
        u.addItem(s2.info[i]);
    }
    return u;
}
    //gets size of set
    int Set::getSize(){
     return size;
    }
    //gets item of the set at i 
    int Set::getItem(int i){
    return info[i];
}