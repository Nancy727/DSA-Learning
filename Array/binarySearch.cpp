#include<iostream>
using namespace std;
int binarySearch(int *arr,int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }else if (key<arr[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;

}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element that you want to search: "<<endl;
    cin>>key;
    cout<<"The element is at index: "<<binarySearch(arr,n,key)<<endl;
}
