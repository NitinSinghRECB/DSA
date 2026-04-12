#include<iostream>
using namespace std;

class Deque{
    public:
        int* arr;
        int size;
        int front;
        int rear;

        Deque(int capacity){
            arr = new int[capacity];
            size = capacity;
            front = -1;
            rear = -1;
        }

        void pushFront(int value){

            if(front==0){
                cout<<"Overflow"<<endl;
            }else if(front ==-1 && rear ==-1){
                front++;
                rear++;
                arr[front]=value;

            }
            else{
                front--;
                arr[front]=value;
            }


        }

        void pushBack(int value){
            if(rear==size-1){
                cout<<"Overfow"<<endl;
            }
            else if( front==-1 && rear ==-1){
                front++;
                rear++;
                arr[rear]=value;
            }
            else{
                rear++;
                arr[rear]=value;
            }

        }

        void popFront(){
            if(front == -1 && rear ==-1){
                cout<<"Underflow"<<endl;
            }
            else if(front == rear){
                front= -1;
                rear = -1;
               
            }
            else{
                
                front++; 
            }
        }

        void popBack(){
            if(front == -1 && rear ==-1){
                cout<<"Underflow"<<endl;
            }
            else if(front == rear){
                front= -1;
                rear = -1;
            }
            else{
                
                rear--;
            }
        }

        void print(){
            for(int i = 0 ; i<size ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }
        int getSize(){
            if(front==-1 && rear==-1){
                return 0;
            }
            else{
                return rear-front+1;
            }
        }
};




int main(){

    Deque dq(7);

    dq.pushFront(10);
    dq.pushFront(20);
    dq.pushFront(30);
    dq.pushFront(40);
    dq.pushFront(50);

    dq.print();

    
    


    return 0;
}