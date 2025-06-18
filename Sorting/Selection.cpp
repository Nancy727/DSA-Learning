#include<iostream>
using namespace std;

void selectionSorting(int *arr,int n){
    for(int i=0;i<n-1;i++){
          int minVal=i;
          for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minVal]){
                minVal=j;
            }
          }
          swap(arr[i],arr[minVal]);
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;

}
int main(){
    int arr[]={5,4,3,7,9,1};
    int n=sizeof(arr)/sizeof(int);
    selectionSorting(arr,n);
}