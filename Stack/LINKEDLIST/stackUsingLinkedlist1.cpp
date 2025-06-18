#include<bits/stdc++.h>
using namespace std;
template <class T>
class Stack{
    list<T> ll;
    public:
    T push(T val){
       ll. push_front(val);
    }
    T pop(){
        ll.pop_front();
    }
    T top(){
        int lastIdx=ll.size()-1;
        return ll.front();
    }
    bool(isempty()){
        return ll.size()==0;
    }
};
int main()
{
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }  
    return 0;
}
