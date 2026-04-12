#include<iostream>
#include<queue>
using namespace std;


int main(){

    deque<int> dq;

    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    cout<<dq.size()<<endl;


    dq.pop_back();
    dq.pop_front();

    cout<<dq.size()<<endl;


    return 0;
}