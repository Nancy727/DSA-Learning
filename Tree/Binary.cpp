#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* BST(Node *root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=BST(root->left,val);
    }else{
        root->right=BST(root->right,val);
    }
    return root;
}
Node* searchinBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchinBST(root->left,key);
    }
    return searchinBST(root->right,key);
}
// void inorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<(root->data);
//     inorder(root->right);
// }
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<(root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root=NULL;
    root=BST(root,5);
    BST(root,1);
    BST(root,3);
    BST(root,4);
    BST(root,2);
    BST(root,7);
    preorder(root);
    cout<<endl;
   if(searchinBST(root,3)==NULL){
    cout<<"Key doest exist"<<endl;
   }else{
    cout<<"Key exists"<<endl;
   }
    
    return 0;
}
