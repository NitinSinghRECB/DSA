#include <iostream>
using namespace std;

int lowerCase(char ch){
    int ans  = ch -'A'+'a';
    return ans;
}

int main(){
    char ans=lowerCase('J');
    cout<<ans;
}