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
    Cricketer c2("Rohit Sharma", 9000);
    

    Cricketer* p1 = &c1;
    cout<<(*p1).name<<endl; //c1.name
    (*p1).runs = 13000; //c1.runs = 13000
    cout<<c1.runs<<endl;   



}   