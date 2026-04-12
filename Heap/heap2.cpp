#include<iostream>
#include<queue>
using namespace std;

int findKthSmallest(int *arr, int n , int k){

    priority_queue<int>pq;
    for(int i = 0 ; i<k ; i++){
        pq.push(arr[i]);
    }
    for(int i = k ; i<n ; i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }

    }
    int ans = pq.top();
    return ans;

    

}
int main(){
    int arr[] = {10,20,30,40,50,9};
    int n = 6;
    int k = 3;

    int ans = findKthSmallest(arr, n , k);

    cout<<ans<<endl;

    return 0;
}