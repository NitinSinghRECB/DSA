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
};




int main(){
    Cricketer c1("Virat Kohli", 12000);
    Cricketer* c2 = new Cricketer("Rohit Sharma", 9000);

    cout<<c1.name<<endl;
    cout<<c2->name<<endl; //c2->name is same as (*c2).name
    



}   