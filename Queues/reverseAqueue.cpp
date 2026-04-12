#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void reverseQueueUsingRecursion(queue<int> &q){
    if(q.empty()) return;
    int el = q.front();
    q.pop();
    reverseQueueUsingRecursion(q);
    q.push(el);
}

void reverseQueue(queue<int> &q){
    stack<int>st;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        st.push(element);
    }
    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    }
}

void printQueue(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }
    cout<<endl;
}


int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // reverseQueue(q);
    reverseQueueUsingRecursion(q);
    printQueue(q);


    return 0;
}