#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Stack{
    Node* top = NULL;
    public:
    void push(int x){
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
        cout<<"Data pushed"<<x<<"\n";
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack underflow\n";
        } else{
            Node* temp = top;
            top = top->next;
            cout<<"Data popped "<<temp->data<<"\n";
        }
    }
    int peek(){
        if(top==NULL){
            cout<<"Stack underflow\n";
            return 0;
        } else {
            return top->data;
        }
    }
};

int main(){

    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.peek()<<"\n";
    st.pop();
    cout<<st.peek()<<"\n";

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();



    return 0;
}