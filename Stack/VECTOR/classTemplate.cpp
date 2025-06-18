#include<iostream>
#include<vector>
using namespace std;
template<class T>
class Stack{
    vector<T> vec;
    public:
    T push(T val){
        vec.push_back(val);
    }
    T pop(){
        vec.pop_back();
    }
    T top(){
        int lastIdx=vec.size()-1;
        return vec[lastIdx];
    }
    bool(isempty()){
        return vec.size()==0;
    }
};
int main()
{
    Stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    
    return 0;
}
