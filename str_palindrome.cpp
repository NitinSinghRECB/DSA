# include <iostream>
#include <string>
using namespace std;

bool solve(string str){
    int i = 0;
    int j = str.length()-1;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            return false;
    }
    return true;
}
}


int main(){
    string str = "abcbax";
    cout<<solve(str)<<endl;

    return 0;
}