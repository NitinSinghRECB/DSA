#include <iostream>
using namespace std;

int upperCase(char ch){
    int ans  = ch -'a'+'A';
    return ans;
}

int main(){
    char ans=upperCase('j');
    cout<<ans;
}