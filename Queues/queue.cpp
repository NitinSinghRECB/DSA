#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);
    q.push(35);

    cout<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty "<<endl;

    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();
    cout<<q.size()<<endl;






    return 0;

}