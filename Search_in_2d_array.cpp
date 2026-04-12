#include <iostream>
using namespace std;
pair<int,int> searchIn2Darray(int arr[][3],int row,int column , int target){
    for(int i = 0 ; i<row;i++){
        for(int j = 0 ; i<column ; j++){
            if(arr[i][j]==target){
                return {row,column};
            }
        }
    }
    return {-1,-1};

}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"input Complete !!"<<endl;
    pair<int,int> ans=searchIn2Darray(arr,3,3,5);
    cout<<ans.first<<","<<ans.second<<endl;
    


}