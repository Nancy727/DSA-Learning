// #include<iostream>
// using namespace std;
// void printArray(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
//     cout<<endl;
// }
//  int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(n);
//     int copyArr[n];
//     for(int i=0;i<n;i++){
//         int j=n-i-1;
//         copyArr[i]=arr[j];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=copyArr[i];
//     }
//     printArray(arr,n);
//  }

 //Method2
 //Using pointers

#include<iostream>
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int  start=0,end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }cout<<endl;
    printArray(arr,n);
}