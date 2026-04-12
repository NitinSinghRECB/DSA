#include<iostream>
#include<stack>
#include<vector>
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

int main(){


    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int value = 5;
    insertAtBotttom(s,value);
    while(!s.empty()){
        cout<<s.top()<<" "; 
        s.pop();
    }
    cout<<endl;

 




    return 0;
}