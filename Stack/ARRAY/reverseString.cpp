#include<iostream>
using namespace std;
#define n 1000
class Stack{
    char arr[n];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(char val){
        if(top==n-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    char pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return '\0';
        }
        else{
            char val=arr[top];
            top--;
            return val;
        }
    }
    bool empty(){
        return top==-1;
    }
   
};
void reverseString(string &str){
    Stack st;
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    for(int i=0;i<str.length();i++){
        str[i]=st.pop();
    }
    
}
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    reverseString(str);
    cout<<"Reversed string is: "<<str<<endl;
    
    return 0;
}
