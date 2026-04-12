#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void insertAtBotttom(stack<int> &s , int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int topvalue = s.top();
    s.pop();
    insertAtBotttom(s,value);
    s.push(topvalue);

}
void reverseAStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int value =s.top();
    s.pop();
    reverseAStack(s);
    insertAtBotttom(s,value);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    reverseAStack(s);

    cout<<"print stack"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}