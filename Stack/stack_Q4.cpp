#include<iostream>
#include<stack>
using namespace std;


void insertSorted(stack<int> &s , int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    if(value<=s.top()){
        s.push(value);
        return;

    }
    else{
        int topVal = s.top();
        s.pop();
        insertSorted(s,value);
        s.push(topVal);
    }

}




int main(){
    stack<int> s;
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);
    
    
    insertSorted(s,25);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}