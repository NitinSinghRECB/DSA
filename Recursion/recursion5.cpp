#include<iostream>
using namespace std;

void printallPermutations(string& s , int i ){
    if(i>=s.length()){
        cout<<s<<endl;
        return;
    }
    for(int j = i ; j<s.length() ; j++){
        swap(s[i],s[j]);
        printallPermutations(s,i+1);
        swap(s[i],s[j]);  //backtracking 
        //without backtracking bhi ho sakta hai agar passs by value kre to 
    }
}

int main(){
    string s = "abcd";
    int i = 0;
    printallPermutations(s,i);


    return 0;
}