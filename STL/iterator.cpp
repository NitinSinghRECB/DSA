#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    vector<int>::iterator it = arr.begin();
    while(it!=arr.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}