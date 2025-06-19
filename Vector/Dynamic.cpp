#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int *arr=new int[size];
    char n ='a';
    for(int i=0;i<size;i++){
        arr[i]=n;
        cout<<arr[i]<<" ";
        n++;
    }
    cout<<endl;
}