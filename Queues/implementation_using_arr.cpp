#include<iostream>
using namespace std;

class Queue{
    public:
        int* arr;
        int size;
        int front;
        int rear;



        Queue(int capacity){
            arr = new int[capacity];
            size = capacity;
            front = -1;
            rear = -1;
        }
    

        void push(int value){

            if(rear==size-1){
                cout<<"overflow"<<endl;
                return ;
            }
            if(front==-1 && rear==-1){
                front++;
                rear++;
                arr[rear]=value;
            }
            else{
                rear++;
                arr[rear]=value;
            }
        }

        void pop(){
            if(front==-1 && rear==-1){
                cout<<"Underflow "<<endl;
                return;
            }
            if(front==rear){
                arr[front]=-1;
                front = -1;
                rear=-1;
            }
            else{
                arr[front]=-1;
                front++;
            }

        }

        int getSize(){

            if(front==-1 && rear==-1){
                return 0;
            }
            else{
                return rear-front+1;
            }
        }

        bool checkEmpty(){
            if(front==-1 && rear==-1){
                return true;
            }
            else{
                return false;
            }

        }

        int getFrontElement(){
            if(front==-1){
                cout<<"there is no element"<<endl;
            }
            else{
                int value = arr[front];
                return value;

            }
        }

        int getRearElement(){
            if(rear==-1){
                cout<<"There is no element "<<endl;
                return -1;
            }
            else{
                int value = arr[rear];
                return value;
            }

        }



};






int main(){

    Queue q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout<<q.getSize()<<endl;
    cout<<q.getFrontElement()<<endl;
    cout<<q.getRearElement()<<endl;



    return 0;
}