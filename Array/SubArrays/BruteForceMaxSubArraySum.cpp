#include<iostream> //Brute force technique: fetching the subarrays-->summing the subarrays-->printing the max subarray sum
using namespace std;   //arr[2]+arr[3]=7 now next arr[2]+arr[3]+arr[4]=12
int maxSum=0;
void subArray(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
            maxSum=max(currSum,maxSum); //use of max function
        }
        cout<<endl;
    }
    cout<<"Maximum Sum of sub array is: "<<maxSum<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    subArray(arr,n);
    return 0;
}
