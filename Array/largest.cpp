#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,5,3,4,85,75,96,57,12,10};
     int n=sizeof(arr)/sizeof(int);
     int max=arr[0];
     for(int i=0;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
     }
     cout<<"Maximum value : "<<max<<endl;
     return 0;
}
