#include<iostream>
using namespace std;
void rowWiseTraversal(int arr[][3],int rowSize , int columnSize){
    for(int i = 0 ; i<rowSize ; i++){
        for(int j = 0  ; j<columnSize ; j++){
            cout<<arr[i][j]<<",";
        }

        cout<<endl;
    }
}

void columnWiseTraversal(int arr[][3], int columnSize,int rowSize ){
    for(int j = 0 ; j<columnSize ; j++){
        for(int i = 0  ; i<rowSize ; i++){
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
    }
}
void rowWiseSum(int arr[][3] , int rowSize , int columnSize){
     for(int i = 0 ; i<rowSize ; i++){
        int sum = 0;
        for(int j = 0  ; j<columnSize ; j++){
            sum+=arr[i][j];
        }
        cout<<sum;
        cout<<endl;
    }
}


void ColumnWiseSum(int arr[][3] , int columnSize , int rowSize){
     for(int i = 0 ; i<rowSize ; i++){
        int sum = 0;
        for(int j = 0  ; j<columnSize ; j++){
            sum+=arr[j][i];
        }
        cout<<sum;
        cout<<endl;
    }
}

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int num;
    cout<<"Enter your Choice \n1.Row Wise Traversal \n2.Column Wise Traversal \n3.Row wise Sum \n4.Column wise Sum \n:- ";
    cin>>num;
    if(num==1){
        rowWiseTraversal(arr,3,3);
    }
    else if ( num==2){
        columnWiseTraversal(arr,3,3);
    }
    else if ( num==3){
        rowWiseSum(arr,3,3);
    }
    else if ( num==4){
        ColumnWiseSum(arr,3,3);
    }
    else{
        cout<<"Wrong option !!!";
    }
    

    return 0;

}