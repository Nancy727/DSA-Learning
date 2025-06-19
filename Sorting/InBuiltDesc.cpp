#include<iostream>
# include<algorithm>
using namespace std;
int main(){
    int arr[]={1,3,6,5,7,1,2,3};
    int n=sizeof(arr)/sizeof(n);
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}