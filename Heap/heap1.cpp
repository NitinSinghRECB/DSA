#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;


class Heap{
    public:
        int *arr;
        int size;
        int index;

        Heap(int capacity){
            size = capacity;
            arr = new int[size];
            index = 0;
        }

        void printHeap(){
            for(int i =0 ; i<size ; i++){
                if(i==0) cout<<"X"<<" ";
                else cout<<arr[i]<<" ";
            }
        }
        void insert(int value){
            //overflow
            if(index==size-1){
                cout<<"Overflow"<<endl;
                return;
            }
            //insert
            index++;
            arr[index] = value;

            //correct position
            int childIdx = index;
            while(childIdx>1){
                
                int parentIdx = childIdx/2;
                if(arr[childIdx]>arr[parentIdx]){
                    swap(arr[childIdx],arr[parentIdx]);
                    childIdx=parentIdx;
                }
                else{
                    //parent>child
                    break;
                }
            }


        }


       
        
        


        
};



void heapify(int *arr, int capacity , int currIdx){
            int i = currIdx;
            int leftChild  = 2*i;
            int rightChild = 2*i+1;
            //now target is to find largest index
            int largestIdx = i;

            //check for left
            if(leftChild<=capacity && arr[leftChild]>arr[largestIdx]){
                largestIdx = leftChild;
            }

            //check for right
            if(rightChild<=capacity && arr[rightChild]>arr[largestIdx]){
                largestIdx = rightChild;
            }

            // iska matlb larget index teeno me se sabse bade index pr hoga 

            //agar current element hi largest hai tb kuch krne ki need hi nhi hai 
            // agr curr larget nhi hai to operation perform karte hai 

            if(largestIdx!=i){
                //cureent elemtn is not largestr
                swap(arr[i],arr[largestIdx]);
                i = largestIdx;
                // ek case to saolve hoo gaya ab recursuin sambhal lega 

                heapify(arr, capacity ,i );
            }
        }


void buildHeap(int* arr , int n ){
    for(int i = n/2 ; i>=1 ; i--){
        heapify(arr,n,i);
        }
    }




void heapSort(int *arr , int n ){
    while(n>1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}





int main(){

    // Heap pq(100);
    // pq.insert(1);
    // pq.insert(2);
    // pq.insert(3);
    // pq.insert(4);
    // pq.insert(44);
    // pq.insert(12);
    // pq.insert(9);
 
    // cout<<"Printing Heap"<<endl;
    // pq.printHeap();
    // cout<<endl;
    // pq.deletefromHeap();
    // cout<<"Printing Heap"<<endl;
    // pq.printHeap();
    


    int arr[]={-1,10,20,30,40,50};
    int n = 5;
    buildHeap(arr,n);

    cout<<"printing heap"<<endl;
    for(int i  = 0 ; i<=n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    heapSort(arr,n);
    cout<<"Printing array after heapsort call"<<endl;
    for(int i =0 ; i<=n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}