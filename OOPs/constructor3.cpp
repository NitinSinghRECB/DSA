#include<iostream>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;
        
        Cricketer(string name , int runs){  //jb constructor me same variable use ho raha ho same as class then we can use this keyword to differentiate between class variable and constructor variable
            this->name = name;
            this->runs = runs;
        }



        void print(){

            cout<<"Cricketer Name: "<<this->name<<" Runs: "<<this->runs<<endl;
        }
};




int main(){
    Cricketer c1("Virat Kohli", 12000);
    Cricketer c2("Rohit Sharma", 9000);
    // c1.name = "Virat Kohli";
    // c1.runs = 12000;


    // cout<<"Cricketer Name: "<<c1.name<<" Runs: "<<c1.runs<<endl;
    // cout<<"Cricketer Name: "<<c2.name<<" Runs: "<<c2.runs<<endl;

    c1.print();
    c2.print();

}   