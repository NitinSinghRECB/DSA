#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> marks(5,-2);

    // cout<<*(marks.begin())<<endl;
    // return 0;

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // v.pop_back();
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<"Size="<<v.size()<<endl;

    // if(v.empty()==true){
    //     cout<<"Vector is Empty"<<endl;
    // }
    // else cout<<"Vector is not Empty"<<endl;
    // v.insert(v.begin(),50);
    // v[2]=100;
    // cout<<v[0]<<endl;


    //traversing using iterator
     vector<int>::iterator it = v.begin();

     while(it!=v.end()){
        cout<<*it<<" ";
        it++;
     }

    



    return 0;

}