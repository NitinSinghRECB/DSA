#include<iostream>
#include<forward_list>
#include<vector>
using namespace std;

forword move
int main(){
    forward_list<int>list;
    list.push_front(10);
    list.push_front(20);    
    list.push_front(30);
    list.push_front(40);
    list.push_front(50);
    forward_list<int>::iterator it = list.begin();


    // while(it!=end(list)){
    //     (*it) = (*it)+5;
    //     it++;
    // }


    // it = list.begin();
    // while(it!=list.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }


    return 0;
    
}


//backward move
// int main(){
//     forward_list<int>list;
//     list.push_front(10);
//     list.push_front(20);
//     list.push_front(30);
//     list.push_front(40);
//     list.push_front(50);

//     forward_list<int>::iterator it = list.end();

//     while(it!=list.begin()){
//         cout<<*it<<endl;
//         it--;  // backword move is not possible in forward_list, this will cause a compilation error
//     }

//     return 0;
// }