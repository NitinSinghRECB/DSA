#include<iostream>
#include<string>
using namespace std;

class Vehicle{
public:
    string name;
    string model;
    int noOfTyres;


    //creating constructor 

    Vehicle(string _name , string _model , int _noofTyres){

        cout<<"I am inside vehicle constructor"<<endl;
        this->name=_name;
        this->model=_model;
        this->noOfTyres=_noofTyres;
    }



public:
    void startEngine(){
        cout<<"Engine is Started "<<name<<endl;

    }
    void stopEngine(){
        cout<<"Engine is Stopping "<<name<<endl;

    }



};

class Car : public Vehicle{
    public:
    int doors;
    string transmission;


    //creating constructor
    Car(string _name , string _model , int _noofTyres , int _doors , string _transmissiontype):Vehicle( _name ,  _model ,  _noofTyres){
        cout<<"I am inside car constructor"<<endl;
        this->doors=_doors;
        this->transmission = _transmissiontype;

    }

    void startAC(){
        cout<<"Ac is started of"<<name<<endl;
    }


};


int main(){

    Car A("Maruti 800" , "LXI",4,4,"Maruti");
    A.startAC();
    A.startEngine();

    return 0;
}