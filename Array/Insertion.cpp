
#include <iostream>
using namespace std;
void insertatBegning(int arr[],int &n){
    int element;
    cout<<"Enter the element to insert: ";
    cin>>element;
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=element;
    n++;
}
void display(int arr[],int n){
    cout<<"New Array:[ ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ]"<<endl;
}


int main() {
   
    int n;
    cout<<"Enter the no.of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the array elements:[ ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"]"<<endl;
    insertatBegning(arr,n);
    display(arr,n);

    return 0;
}