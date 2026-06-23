#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
        int age;
        int gpa;
};


int main(){

    Student s1;
    s1.name = "Nitin Kumar Singh";
    s1. rollno = 101;
    s1.age = 20;
    s1.gpa = 9;

    cout<<"Name: "<<s1.name<< " Roll No:"<<s1.rollno<<endl;
    cout<<"Age: "<<s1.age<< " GPA: "<<s1.gpa<<endl;

    return 0;
}