#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class Stack{
    public:
    Node* top;
    Stack(){
        top=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(top==NULL){
            top=newNode;
            return;
        }
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* todelete=top;
        top=top->next;
        delete todelete;
    }
    int Top(){
        if(top==NULL){
            return -1;
        }
        return top->data;
    }
    bool empty(){
        return top==NULL;
    }
};
int main()
{
    Stack ll;
    ll.push(4);
    ll.push(3);
    ll.push(2);
    ll.push(1);
    cout<<ll.Top()<<endl;
    ll.pop();
    cout<<ll.Top()<<endl;
    ll.pop();
    cout<<ll.Top()<<endl;
    ll.pop();
    cout<<ll.empty()<<endl;

    
    return 0;
}
