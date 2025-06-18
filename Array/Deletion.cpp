#include<iostream>
using namespace std;
void deleteatBigning(int arr[],int &n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
void display(int arr[],int n){
    cout<<"New Array:[ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the array elements:[";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"]"<<endl;
    deleteatBigning(arr,n);
    display(arr,n);
    
    return 0;
}
