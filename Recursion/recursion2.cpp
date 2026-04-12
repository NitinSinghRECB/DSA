#include<iostream>
using namespace std;
void print(int arr[] , int size ,  int index){
    if(index>=size){
        return;
    }
    cout<<arr[index]<<endl;
    print(arr,size,index+1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,5,0);
}