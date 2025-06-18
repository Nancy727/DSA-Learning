#include<iostream>
using namespace std;
#define n 100
class Stack{
    public:
    int*arr;
    int top;
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int val){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No elemnt in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
           return top==-1;
    }
};
int main()
{
    Stack st;
    st.push(3);
    st.push(2);
    st.push(1);
    while(!st.empty()){
        cout<<st.Top()<<" ";
        st.pop();
    }
    cout<<"Top: "<<st.Top()<<endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    cout<<st.empty()<<endl;
    
    return 0;
}
