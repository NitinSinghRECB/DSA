#include<iostream>
#include<stack>
#include <limits.h>
#include<vector>
#include<string>
using namespace std;


class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int capacity){
        arr = new int[capacity];
        top = -1;
        size = capacity;
    }



    void push(int value){
        if(top==size-1){
            cout<<"Stack overflow "<<endl;
        }
        else{

            top++;
            arr[top]=value;

        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int getSize(){

        return top+1;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false; 
        }
    }

    int getTopElement(){
        if(top==-1){
            cout<<"Empty stack"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }




};






int main(){
    Stack s(100);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.getSize()<<endl;
    cout<<s.getTopElement()<<endl;
    s.pop();

    cout<<s.getSize()<<endl;
    cout<<s.getTopElement()<<endl;
    


    return 0;
}

