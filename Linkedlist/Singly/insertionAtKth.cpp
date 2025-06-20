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
Node* insertionAtKth(Node* head,int val,int k){
    if(head==NULL){
        if(k==1){
             return new Node(val);
        }else{
            return head;
        }
    }
    if(k==1){
            return new Node(val,head);
    }
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==(k-1)){
            Node* x=new Node(val,temp->next);
            temp->next=x;
            break;
        }
       temp=temp->next; 
    }
    return head;
}
int main(){
    vector<int> arr={1,2,5,6};
    Node* head=nullptr;
    for (int i = arr.size() - 1; i >= 0; i--) {
    head = insertionAtKth(head,arr[i],1);
}
    head=insertionAtKth(head,3,3);
    head=insertionAtKth(head,4,4);
    printLL(head);
}