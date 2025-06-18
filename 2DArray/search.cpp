#include<iostream>
using namespace std;
bool staircaseSort(int mat[][4],int n,int m,int key){
    int i=0;int j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"Found at cell("<<i<<","<<j<<")\n";
            return true;
        }else if(mat[i][j]<key){
            //right
            i++;
        }else{
            j--;
        }
    }
    cout<<"Key Not Found\n";
    return false;
}
int main(){
    int mat[4][4];
    int n=sizeof(mat)/sizeof(mat[0]);
    int m=sizeof(mat[0])/sizeof(int);
    cout << "Enter the elements of the matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    staircaseSort(mat,4,4,33);
}