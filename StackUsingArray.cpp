#include<iostream>
using namespace std;

class Stack{

    // arr
    int arr[5];
    // top
    int top = -1;
public:
    // Push
    void push(int a){
        if(top==4){
            cout<<"Stack overflow"<<a<<"\n";
            return;
        }
        top++;
        arr[top] = a;
        cout<<"Data inserted "<<a<<"\n";
    }
    // Pop
    int pop(){
        if(top==-1){
            cout<<"Stack underflow"<<"\n";
            return 0;
        }
        int ele = arr[top];
        top--;
        return ele;
    }
    // Peek
    int peek(){
        return arr[top];
    }
};

int main(){

    Stack s;

    s.push(1);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";




    return 0;
}