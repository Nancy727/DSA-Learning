#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,42,562,0,4};
    int min=arr[0];
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<=n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The smallest value of the array is: "<<min<<endl;
}