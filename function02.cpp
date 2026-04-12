#include<iostream>
using namespace std;
void checkEvenOdd(int num){
    if (num%2==0){
        cout<<"Even"<<endl;
    }
    else
    cout<<"odd"<<endl;
}


void checkNum(int num){
    if(num>0)
    cout<<"positive";

    else if(num<0){
        cout<<"Negative";

    }

    else
    cout<<"Zero";
}





int main(){
    checkEvenOdd(15);
    checkNum(5);
}