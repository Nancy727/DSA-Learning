#include<iostream>
using namespace std;
void sumArray(int *arr,int n){
    int maxSum=INT8_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Max Sum: "<<maxSum<<endl;
}
int main(int argc, char const *argv[])
{
    int arr[]={2,-6,5,-3,7,8};
    int n=sizeof(arr)/sizeof(n);
    sumArray(arr,n);

    return 0;
}

