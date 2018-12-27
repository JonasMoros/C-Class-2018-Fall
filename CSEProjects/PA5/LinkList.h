#include "Book.h"
class ListNode{
    
    private:
        ListNode* next;
        Book data;
    public:
        void setData(Book b){
            data = b;
        }
        Book getData(){
            return data;
        }
        void setNext(ListNode* n){
            next = n
        }
        ListNode* getNext(){
            return next;
        }

};

class LinkList{
    private: 
        Node* front;
    public:
        LinkedList(){
            front = nullptr;
        }
        void pushFront(Book b){
            Node* temp = new Node(x);
            temp -> setNext(front);
            front = temp;
        }
        void printTest(){
            ListNode* current = front;
            while(current != nullptr){
                cout << current -> getData().getTitle() << endl;
                current  = current -> getNext(); 

            }
        }


};
