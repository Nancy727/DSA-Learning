#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* insertAtHead(Node* head,int val){
    Node* temp=new Node(val,head);
    return temp;
}
Node* insertAtTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}
int main(){
   Node* head = nullptr;
vector<int> arr = { 1,2, 3, 4, 5};
for (int i = arr.size() - 1; i >= 0; i--) {
    head = insertAtHead(head,arr[i]);
}
head = insertAtHead(head, 0);
printLL(head);  
head=insertAtTail(head,6);
printLL(head);
}