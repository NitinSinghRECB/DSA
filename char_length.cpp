#include<iostream>
#include<cstring>
using namespace std;
// int getLength(char arr[] , int size){
//     int c = 0;
//     while(arr[c]!='\0'){
//         c++;
//     }

//     return c;
// }

void replaceByX(char arr[] , int size){
    for(int i = 0 ; i< size ; i++){
        if(arr[i]== ' '){
            arr[i]='X';
        }
    }
}

int main(){

    char arr[50];
    cout<<"Enter a string"<<endl;
    cin.getline(arr,50);
    // cout<<"Length of char arr="<<getLength(arr,50);
    replaceByX(arr,50);
    cout<<"output="<<arr<<endl;
    return 0;
}