#include<iostream> //in this start se direct next index wala number add hoga like: arr[2]+arr[3]=7 now 7+arr[4]=12
using namespace std;
int maxSum=0;
void subArray(int *arr,int n){
    for(int start=0;start<n;start++){  //if we start from 2
        int currSum=0;
        for(int end=start;end<n;end++){ //2,3,4,5
            currSum+=arr[end];         
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
