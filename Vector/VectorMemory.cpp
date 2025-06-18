#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1={1,2,3,4,5};
    cout<<"The size of vector array is:"<<vec1.size()<<endl;
    cout<<"The Capacity of vector array is:"<<vec1.capacity()<<endl;

    for (int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<",";
    }
    cout<<endl;
    vec1.push_back(6);
    cout<<"The size of vector array is:"<<vec1.size()<<endl;
    cout<<"The Capacity of vector array is:"<<vec1.capacity()<<endl;//capacity doubles
    vec1.pop_back();//remove the last element so size gonna change but capacity will be same
    cout<<"The size of vector array is:"<<vec1.size()<<endl;
    cout<<"The Capacity of vector array is:"<<vec1.capacity()<<endl;
    return 0;
}
