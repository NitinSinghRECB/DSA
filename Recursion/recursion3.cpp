#include<iostream>
using namespace std;

int searchArray(int arr[] , int size , int index , int target){
    if(index>=size) return -1;
    if(arr[index]==target) return index;
    int result = searchArray(arr,size,index+1,target);
    return result;
}
int main(){
    int arr[10]={3,2,1,9,8,7,6,5,10,24};
    int ans = searchArray(arr,10,0,50);
    cout<<ans;
}