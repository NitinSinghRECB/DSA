//fibonacci 

#include <iostream>
#include <vector>
using namespace std;


//this is recursion 
// int solve(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return solve(n-1)+solve(n-2);
// }



// this is dp
int solve(int n , vector<int>&dp ){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans = solve(n-1,dp)+solve(n-2,dp);
    //store the answer in dp array
    dp[n] = ans;
    return dp[n]; 

}

int main(){
    // int n = 8;
    // int ans = solve(n);
    // cout<<ans<<endl;
    // return 0;
    int n = 8;
    vector<int>dp(n+1,-1);
    int ans = solve(n,dp);
    cout<<ans<<endl;
    return 0;

}