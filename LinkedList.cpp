// Linked List Implementation in C++

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    Node* head;

public:
    LinkedList(){
        head = NULL;
    }
    // first
    void insertAtFirst(int val){
        Node* newNode  = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    // mid
    void insertAtMid(int val, int pos){
        if(pos==1){
            insertAtFirst(val);
        } else {
            Node* cur = head;
            int count = 1;

            while (cur !=NULL && count < pos-1){
               cur = cur->next;
               count++; 
            }

            if(cur==NULL){
                cout<<"Postion is Out of bound\n";
                return;
            }

            Node* newNode = new Node(val);
            newNode->next = cur->next;
            cur->next = newNode;
        }
    }
    // last
    void insertAtLast(int val){
        Node* cur = head;

        while(cur->next){
            cur = cur->next;
        }
        Node* newNode = new Node(val);
        cur->next = newNode;
    }
    // traverse
    void traverse(){
        Node* cur = head;
        while(cur){
            cout<<cur->data<<" -> ";
            cur = cur->next;
        }
        cout<<"NULL\n";
    }
    // delete at first
    void deleteAtFirst(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        free(temp);
    }
    // delete at certain position
    void deleteAtCertainPosition(int pos){
        if(head==NULL){
            return;
        }
        if(pos==1){
            deleteAtFirst();
        }
        Node* cur = head;
        int count = 1;

        while (cur!=NULL && count < pos-1){
            cur = cur->next;
            count++;
        }
        if(cur==NULL){
            cout<<"Out of bound\n";
            return;
        }
        Node* temp = cur->next;
        if(temp==NULL){
            cout<<"Out of bound\n";
            return;
        }
        cur->next = cur->next->next;
        free(temp);
    }
    // delete at last
    void deleteAtLast(){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            deleteAtFirst();
        }
        Node* cur = head;

        while (cur->next->next!=NULL){
            cur = cur->next;
        }
        Node* temp = cur->next;
        cur->next = NULL;
        free(temp);
    }
};

int main(){

    LinkedList ll;

    ll.insertAtFirst(1);
    ll.insertAtFirst(2);
    ll.insertAtFirst(3);

    ll.insertAtLast(4);
    ll.insertAtLast(5);
    ll.insertAtLast(6);

    ll.insertAtMid(8, 4);
    ll.insertAtMid(10, 2);
    // ll.insertAtMid(12, 11);

    ll.deleteAtFirst();
    ll.deleteAtLast();
    ll.deleteAtCertainPosition(3);
    ll.deleteAtCertainPosition(5);

    ll.traverse();

    return 0;
}