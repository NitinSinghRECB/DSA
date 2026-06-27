#include<iostream>
#include<vector>
#include<algorithm>
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

class CustomObj{
    public:
        bool operator()(Student a , Student b){
            if(a.marks == b.marks) return a.name<b.name;
            return a.marks < b.marks;
        }
};

int main(){

    vector<Student>arr;
    arr.push_back(Student(100,"Nitin"));
    arr.push_back(Student(99,"Aditya"));
    arr.push_back(Student(95,"Db"));
    arr.push_back(Student(98,"Sanny"));
    arr.push_back(Student(98,"Saurabh"));

    sort(arr.begin() , arr.end() , CustomObj());
    for(Student a: arr){
        cout<<a.marks<<" "<<a.name<<endl;
    }

}