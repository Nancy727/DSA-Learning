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
class Queue{
    Node* front;
    Node* back;
    public:
    Queue(){
        front=NULL;
        back=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(front==NULL){
            front=newNode;
            back=newNode;
            return;
        }
        back->next=newNode;
        back=newNode;
    }
    void pop(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
        return front==NULL;
    }
};
int main(){
    Queue ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    cout<<ll.peek()<<endl;
    ll.pop();
    cout<<ll.peek()<<endl;
    ll.pop();
    cout<<ll.peek()<<endl;
    ll.pop();
    cout<<ll.peek()<<endl;
    ll.pop();
    cout<<ll.empty()<<endl;
    return 0;
}
