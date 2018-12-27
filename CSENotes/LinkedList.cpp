#include <iostream>
//#include "LinkList.h"
#include "LinkedListNodes.h"

using namespace std;
int main(){

    LinkedList l;
    l.pushFront(20);
    l.pushFront(14);
    l.pushFront(12);
    l.printList();
    return 0;
}
// int main(){
//     system("clear");
//     Node* a = new Node(10);
//     Node* b = new Node(11);
//     Node* c = new Node(12);

//     a -> setNext(b);
//     b -> setNext(c);

//     Node* current = a;

//     while(current != nullptr){
//         cout << "current is " << current -> getData() << endl;
//         current = current->getNext();
//     }
//     return 0;
// }