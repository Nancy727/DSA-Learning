#include<iostream>
using namespace std;
#include<vector>
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertArr2DLL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void printDLL(Node* head){
    Node* temp=head;
   while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
}

    cout<<endl;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    Node* head=convertArr2DLL(arr);
    printDLL(head);
    
}