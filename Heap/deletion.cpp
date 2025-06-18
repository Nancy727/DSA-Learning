#include<iostream>
using namespace std;
void insert(int arr[],int n){
    int i=n;
    int temp=arr[i];
    while(i>1&& temp>arr[i/2]){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}
int Delete(int arr[],int n){
    int i,j,x,val,temp;
    val=arr[1];
    x=arr[n];
    arr[1]=arr[n];
    arr[n]=val;
    i=1;
    j=2*i;
    while(j<=n-1){
        if(j<n-1 && arr[j+1]>arr[j]){
            j=j+1;
        }
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i=j;
            j=j*2;
        }
        else{
            break;
        }
    }
    return val;
}
int main()
{
    int arr[]={0,10,20,30,25,5,40,35};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 2; i < n; i++) {
        insert(arr,i);
    }
     for (int i = 7; i >1; i--) {
        Delete(arr,i);
      
    }
    cout<<"Max heap array: ";
    cout << "[";
    for (int i = 1; i < n-1; i++) {
        cout<<arr[i]<<" ";
        if(i<n-2){
            cout<<", ";
        }
    }
    cout<<"]";
  
    

    return 0;
}
