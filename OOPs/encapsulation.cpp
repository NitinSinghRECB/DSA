#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    int id;
    int age;
    string name;
    int nos;
    float *gpa;


public:
    void setGPA(float a){
        *this->gpa=a;
    }
    float getGPA() const{
        return *this->gpa;
    }
public:
    Student(){
        cout<<"Student default constructor called"<<endl;
    }

    //PARAMETERIZED CONSTRUCTOR
    Student(int id,int age, string name,int nos,float gpa ,  string gf){
        cout<<"Student paramaterised constriuctor is called"<<endl;
        this->id = id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        this->gpa = new float(gpa);
        this->gf=gf;

    }



private:
    int *gpa;
    string gf;

private:
    void gfchatting(){
        cout<<this->name<<" is chatting with gf"<<endl;
    }

    
};


int main(){
    Student A(1,20,"Babbar",5,7.8,"xyz");
    //private is not accessed 

    cout<<A.age<<endl;
    // cout<<A.gf<<endl; //NOt working because private 
    
    // A.gfchatting();   // not access beacause private





    return 0;
}



