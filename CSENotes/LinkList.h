#ifndef LINKLIST_H
#define LINKLIST_H
class Node{
    private:
    int data;
    Node* next;

    public: 
    Node(int d, Node* n = nullptr){
        data = d;
        next = n;
    }
    Node* getNext(){
        return next;

    }
    void setNext(Node* n){
        next = n;
    }
    int getData(){return data;}
    void setData(int d){ data = d;}


};
#endif