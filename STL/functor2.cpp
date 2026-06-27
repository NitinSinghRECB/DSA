#include<iostream>
using namespace std;


class Student{
    public:
    int marks;
    string name;
    Student(){

    }
    Student(int m , string n){
        this->marks = m;
        this->name = n;
    }
};


class StudentCMP{
    public:
    bool operator()(Student a , Student b){
        return a.marks < b.marks;
    }

};

int main(){

    Student s1;
    Student s2;
    s1.marks = 99;
    s1.name = "NitinBhai";

    s2.marks = 98;
    s2.name = "Nitin";

    StudentCMP cmp;
    if(cmp(s1,s2)){
        cout<<"NitinBhai ke marks Nitin se kam hai"<<endl;
    }
    else {
        cout<<"NitinBhai ke marks Nitin se jyada hai";
    }

    return 0;
}