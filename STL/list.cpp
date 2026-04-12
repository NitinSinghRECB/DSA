#include <iostream>
#include<list>

using namespace std;
int main(){
    list<int> myList;

    //insertion from back
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);
    myList.push_back(60);
    myList.push_back(70);
    myList.push_back(80);
    myList.push_back(90);

    //insertion from front 
    myList.push_front(11);
    myList.push_front(12);
    myList.push_front(13);
    myList.push_front(14);

    //deletion from back
    myList.pop_back();

    //deletion from front
    myList.pop_front();


    cout<<"This is List 1 before swapping"<<endl;
    for(int i : myList){
        cout<<i<<" ";
    }
    cout<<endl;



    list<int> myList2;

    myList2.push_back(1);
    myList2.push_back(2);
    myList2.push_back(3);
    myList2.push_back(4);
    myList2.push_back(5);
    myList2.push_back(6);

    cout<<"This is List 2 before swapping"<<endl;
    for(int i : myList2){
        cout<<i<<" ";
    }
    cout<<endl;


    myList.swap(myList2);
    cout<<"This is List 1 after swapping"<<endl;
    for(int i : myList){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"This is List 2 after swapping"<<endl;
    for(int i : myList2){
        cout<<i<<" ";
    }
    cout<<endl;


    
    // int size = myList.size();
    // cout<<"size is = "<<size<<endl;
    // myList.clear();

    // if(myList.empty()==true) cout<<"List is Empty"<<endl;
    // else cout<<"List is not Empty"<<endl;



    return 0;


}