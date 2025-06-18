#include<iostream>
using namespace std;
void insertionSorting(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={1,5,7,3,6,4,2};
    int n=sizeof(arr)/sizeof(int);
    insertionSorting(arr,n);
}