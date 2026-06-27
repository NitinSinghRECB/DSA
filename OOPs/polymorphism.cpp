#include<iostream>
using namespace std;

class Loading{

    public:


        //fuction overloading
        void sum(int a , int b){
            cout<<"Sum of two numbers is : "<<a+b<<endl;
        }

        void sum(int a , int b , int c){
            cout<<"Sum of three numbers is : "<<a+b+c<<endl;
        }
        // int sum(int a , int b){    this will give error because function overloading is not possible with return type
        //     return a+b+c+d;
        // }

};

int main(){

    Loading a;
    a.sum(10 , 20);
    a.sum(10 , 20 , 30);


    return 0;
}