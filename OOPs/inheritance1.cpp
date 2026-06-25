#include<iostream>
using namespace std;

class Car{  //parent class
    public:
        string name;
        string model;
        int price;
        int year;

        // Car(string name , string model , int price , int year){
        //     this->name  = name;
        //     this->model = model;
        //     this->price = price;
        //     this->year  = year;
        // }

};


class Bike : public Car{ //child class / derived class
    public:
        int gears;
        // Bike(string name , string model , int price , int year , int gears) : Car(name , model , price , year){
        //     this->gears = gears;
        // }

};

int main(){
        Bike b1;
        b1.name = "Honda";
        b1.model = "CBR";
        b1.price = 200000;
        b1.year = 2020;
        b1.gears = 6;





    return 0;
}