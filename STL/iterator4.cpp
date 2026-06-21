#include<iostream>
#include<forward_list>
#include<vector>
#include<list>
using namespace std;


//bidirectional iterator
int main(){

    list<int>myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    // list<int>::iterator it = myList.begin();

    // while(it!=myList.end()){
    //     ///writing
    //     (*it) = (*it)+2;
    //     //read
    //     cout<<*it<<" ";
    //     //forward move
    //     it++;
    // }

    //lets do backward move
    list<int>::iterator it = myList.end();
    while(it!=myList.begin()){
        it--;
        cout<<*it<<' ';
    }

    return 0;
}