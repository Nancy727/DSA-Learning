#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
     
}
int main()
{
    int key;
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter the key to be found: "<<endl;
    cin>>key;
    cout<<"The key is found at index: "<<search(arr,n,key)<<endl;
    return 0;
}
