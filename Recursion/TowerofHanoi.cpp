#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char src,char dest,char helper,int &moveCount){
    if(n==0){
        return;
    }
    TowerOfHanoi(n-1,src,helper,dest,moveCount);
    cout<<"Mover from "<<src<<" to "<<dest<<endl; 
    moveCount++; 
    TowerOfHanoi(n-1,helper,dest,src,moveCount);
    cout<<"Mover from "<<src<<" to "<<helper<<endl;  
}
int main()
{
    int moveCount=0;
    TowerOfHanoi(4,'S','D','H',moveCount);
    cout<<"Total number of moves: "<<moveCount<<endl;
    return 0;
}
