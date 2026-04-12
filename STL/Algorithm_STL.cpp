#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printDouble(int a){
    cout<<2*a<<" ";
}

bool checkEven(int a ){
    return a%2==0;
}
int main(){
    vector<int>arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_back(70);
    arr.push_back(80);
    arr.push_back(80);
    arr.push_back(80);
    arr.push_back(80);
    arr.push_back(80);



    //for_each(arr.begin(),arr.end(),printDouble);

    // int target = 40;
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;


    // auto it = find_if(arr.begin(),arr.end(),checkEven);
    // cout<<*it<<endl;


    //int target = 80 ;
    // int ans = count(arr.begin(),arr.end(),target);
    // cout<<ans<<endl;


    // int ans = count_if(arr.begin(),arr.end(),checkEven);
    // cout<<ans<<endl;

    sort(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }

    cout<<endl;

    reverse(arr.begin(),arr.end());
    for(int a : arr){
        cout<<a<<" ";
    }

 
    return 0;
} 