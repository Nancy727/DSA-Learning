#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,9}};//vectors are dynamic so we can change the elements but we cannot do the same for arrays
    for(int i=0;i<matrix.size();i++){
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
