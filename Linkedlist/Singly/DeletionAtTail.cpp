#include<iostream>
using namespace std;
#include<vector>
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
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* deleteAtTail(Node* head){
    if(head==NULL||head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
int main(){
    vector<int> arr={1,2,3,4};
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        mover->next=new Node(arr[i]);
        mover=mover->next;
    }
    cout<<"original linked list:";
    printLL(head);
    head=deleteAtTail(head);
    cout<<"After deletion:";
    printLL(head);
    while(head!=NULL){
        Node* temp=head;
        head=head->next;
        delete temp;
    }

}