#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        int price;
        string type;
};

void print(Car c){
    cout<<"Car Name: "<<c.name<<" Price: "<<c.price<<" Type: "<<c.type<<endl;
}


int main(){

    Car c1;
    c1.name = "BMW";
    c1.price = 15000000;
    c1.type = "Sedan";


    Car c2;
    c2.name = "Audi";
    c2.price = 20000000;
    c2.type = "SUV";



    // cout<<"Car 1: "<<c1.name<<" Price: "<<c1.price<<" Type: "<<c1.type<<endl;
    // cout<<"Car 2: "<<c2.name<<" Price: "<<c2.price<<" Type: "<<c2.type<<endl;

    print(c1);
    print(c2);



    return 0;
}