#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        Student(){

        }
        Student(string name , int roll , int marks){
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }

        int getMarks(){
            return marks;
        }

        void setMarks(int m){
            marks = m;
        }

    private:
        int marks;


        
};

int main(){
    Student s1("Alice", 1, 85);
    s1.setMarks(90);
    cout<<s1.getMarks()<<endl;

    return 0;
}

