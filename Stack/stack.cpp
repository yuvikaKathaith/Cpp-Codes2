#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
class Stack{
    public:
    //properties    
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int (size);
        top=-1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow";
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if (top==-1){
            return true;
        }
        else{
            return false;
        }
    }    
};
int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }

    /*
    //creation of stack using STL
    stack<int> s;

    //push opertaion
    s.push(1);
    s.push(3);
    //pop operation
    s.pop();
    cout<<"printing the top element : "<<s.top()<<endl;
    if(s.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
    cout<<"size of stack : "<<s.size()<<endl; */
    
    return 0;
}