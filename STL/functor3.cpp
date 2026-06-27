#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class CustomSort{
    public:
        bool operator()(int a, int b){
            return a>b;
        }

};

int main(){

    vector<int>arr;
    arr.push_back(22);
    arr.push_back(43);
    arr.push_back(21);
    arr.push_back(87);
    arr.push_back(24);
    arr.push_back(26);
    arr.push_back(29);

    //it sort in ascending order
    sort(arr.begin() , arr.end() , CustomSort());

    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}