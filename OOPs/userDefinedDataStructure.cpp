#include<iostream>
using namespace std;

class Vector{
    public:
        int* arr;
        int size;
        int capacity;

        Vector(){
            arr = new int[1];
            size = 0;
            capacity = 1;
        }

        void add(int element){
            if(size==capacity){
                capacity *=2;
                int* arr2 = new int[capacity];
                for(int i =0 ; i<size ; i++){
                    arr2[i] = arr[i];
                }

            }
            arr[size] = element;
            size++;
        }

        void print(){
            for(int i =0 ; i<size ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }


};


int main(){
    Vector v;
    v.add(10);
    v.add(20);
    v.add(30);
    v.add(40);
    v.print();


}