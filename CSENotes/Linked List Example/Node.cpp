#include "Node.h"

Node::Node(){
    next = nullptr;
}
Node::Node(Student& s):data(s){
    next = nullptr;
}
Student& Node::getData(){
    return data;
}
void Node::setData(Student& s){
    data = s;
}
void Node::setNext(Node* n){
    next = n;
}
Node* Node::getNext(){
    return next;
}