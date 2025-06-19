#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1={1,2,3,4,5};
    cout<<"The size of vector array is:"<<vec1.size()<<endl;
    for (int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<",";
    }
    cout<<endl;
    return 0;
}
