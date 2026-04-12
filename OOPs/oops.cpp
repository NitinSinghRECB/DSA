#include <iostream>
#include<string>
using namespace std;

class Student{
    //attributes
    public:
    int id;
    int age;
    string name;
    int nos;

    //constructor:default constructor
    // Student(){
    //     cout<<"Student Default constructor called"<<endl;
    // }
    //we dont use default constructor because it takes more memory


    //parameterized constructor
    Student(int id , int age , string name,int nos){
        cout<<"Student Parameterized constructor called"<<endl;

        this->id = id;
        this->age = age;
        this->name = name;
        this->nos=nos;
    }




    //behavoiur//methods//function
    void study(){
        cout<<this->name<<" is studying"<<endl;
    }
    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<" is bunking"<<endl;
    }


    //destructor
    ~Student(){
        cout<<this->name<<" Destructor called"<<endl;
        //destructor automatic call hoga
    }
};


int main(){
    // Student A;
    // A.id = 1;
    // A.age = 20;
    // A.name = "Nitin";
    // A.nos = 101;
    // A.study();



    // Student B;
    // B.id = 2;
    // B.age = 21;
    // B.name = "Ravi";
    // B.nos = 102;
    // B.sleep();



    // Student A(1,20,"Nitin",22);
    // Student B(2,21,"Ravi",23);
    // Student C(3,22,"Amit",24);
    // Student D(4,23,"Sumit",25);
    // Student E(5,24,"Saurav",26); 






    // cout<<A.name<<" "<<A.age<<endl;
    // A.sleep();
    // A.bunk();


    //copy constructor
    // Student C = A; 


    //this is called dynamic memory allocation or student pointer
    Student *A = new Student(1,20,"Nitin",22);
    cout<<A->name<<endl;
    A->sleep();
    delete A; //destructor call hoga , kyuki isme automatic call nhi hoga
    return 0;
}