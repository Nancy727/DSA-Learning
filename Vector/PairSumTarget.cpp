#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> arr,int target){
    int start=0,end=arr.size()-1;
    vector<int>ans;
    while(start<end){
        int currSum=arr[start]+arr[end];
        if(currSum==target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(currSum<target){
            start++;
        }else{
            end--;
        }
    }
    return ans;

   } 
int main(){
    vector<int> arr={1,2,3,4,5};
    int target=5;
    vector<int>ans=pairSum(arr,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
}