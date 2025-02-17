// Doubly Linked List Implementation in C++

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    Node* head;

    public:
    DoublyLinkedList(){
        head = NULL;
    }
    void insertAtFirst(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        if(head!=NULL){
            head->prev = newNode;
        }
        head = newNode;
    }
    void insertAtSpecificPosition(int val, int pos){
        if(head==NULL || pos == 1){
            insertAtFirst(val);
        } else {
            Node* cur = head;
            int count = 1;
            while (cur!=NULL && count<pos-1 ){
                cur = cur->next;
                count++;
            }
            if(cur==NULL){
                cout<<"Out of bound\n";
                return;
            }
            Node* newNode = new Node(val);
            newNode->next = cur->next;
            newNode->prev = cur;
            cur->next = newNode;
            if(newNode->next!=NULL){
                newNode->next->prev = newNode;
            }
        }
    }
    void insertAtLast(int val){
        if(head==NULL){
            insertAtFirst(val);
        } else {
            Node* cur = head;

            while(cur->next!=NULL){
                cur = cur->next;
            }
            Node* newNode = new Node(val);
            newNode->prev = cur;
            cur->next = newNode;
        }
    }
    void traverse(){
        Node* cur = head;
        while (cur!=NULL){
            cout<<cur->data<<"-->";
            cur =  cur->next;
        }
        cout<<"NULL";
    }

    void deleteAtFirst(){
        Node* temp = head;
        head = head->next;
        free(temp);
    }
};

int main(){

    DoublyLinkedList dll;

    dll.insertAtFirst(1);
    dll.insertAtFirst(2);
    dll.insertAtFirst(3);

    dll.insertAtLast(4);
    dll.insertAtLast(5);
    dll.insertAtSpecificPosition(12, 3);
    dll.insertAtSpecificPosition(11, 7);
    dll.insertAtSpecificPosition(13, 10);

    dll.deleteAtFirst();
    dll.deleteAtFirst();

    dll.traverse();


    return 0;
}