#include<iostream>
#include<cstring>
using namespace std;


void convertToLC(char arr[] , int size){
    for(int i = 0 ; i < size  ; i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i]=arr[i]-'A'+'a';
        }
    }
}


void convertToUC(char arr[] , int size){
    for(int i = 0 ; i < size  ; i++){
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i]=arr[i]-'a'+'A';
        }
    }
}



void reverse(char arr[]){
    int s =0;
    int e = strlen(arr)-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}


bool checkPalindrome(char arr[],int size){
    int s= 0;
    int e =strlen(arr)-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}



int main(){
    char arr[20];
    cout<<"Enter the String=";
    cin.getline(arr,20);

    // convertToUC(arr,20);
    // cout<<"Output="<<arr<<endl;

    // convertToLC(arr,20);
    // cout<<"Output="<<arr<<endl;
    // reverse(arr);
    // cout<<arr<<endl;

    bool ans =checkPalindrome(arr,20);
    cout<<"output="<<ans<<endl;


    return 0;
}