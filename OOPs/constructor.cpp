#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
        int age;
        int gpa;

        Student(){ //default constructor

        }


        //constructor
        Student(string n , int r , int a , int g){  //parameterized constructor
            name = n;
            rollno = r;
            age = a;
            gpa = g;

        }


};


int main(){

    Student s1("Nitin Kumar Singh",100,20,9);
    // s1.name = "Nitin Kumar Singh";
    // s1. rollno = 101;
    // s1.age = 20;
    // s1.gpa = 9;
    Student s2 = s1; //deep copy
    s2.name = "Dara Singh";

    Student s3(s1); //copy constructor - Deep Copy 

    cout<<"Name: "<<s1.name<< " Roll No:"<<s1.rollno<<endl;
    cout<<"Age: "<<s1.age<< " GPA: "<<s1.gpa<<endl;

    cout<<"Name: "<<s2.name<< " Roll No:"<<s2.rollno<<endl;
    cout<<"Age: "<<s2.age<< " GPA: "<<s2.gpa<<endl;

    return 0;
}