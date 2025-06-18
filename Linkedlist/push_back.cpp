#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* next;
    public:
    Node(int val){
        data=val;
        next=NULL;
    }
    friend class List;
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
};
int main()
{
    List ll;
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    return 0;
}
