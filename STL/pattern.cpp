#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i =0 ; i<n ; i++){
        int k=1;
        for(int j =0 ; j<=i ; j++){
            cout<<k;
            k++;
        }
        for(int j=2*n-2*i-1; j>0 ; j--){
            cout<<" ";
        }
        int x=i;
        for(int j =0 ; j<=i ; j++){
            cout<<x+1;
            x--;
        }
        cout<<endl;
    }
    
}