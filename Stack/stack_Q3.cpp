#include<iostream>
#include<stack>
using namespace std;

void printMiddleFromStack(stack<int> &s , int count , int totalsize){
    if(count==totalsize/2){
        cout<<s.top()<<endl;
        return;
    }
    int value = s.top();
    s.pop();
    count++;
    printMiddleFromStack(s,count,totalsize);
    s.push(value);



}


int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int count = 0;
    int totalsize = s.size();
    printMiddleFromStack(s,count,totalsize);

    return 0;
}