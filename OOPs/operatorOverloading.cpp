#include<iostream>
using namespace std;

class Fraction{
    public:
    int num;
    int den;

    Fraction(int num , int den){
        this->num = num;
        this->den = den;
    }



    void display(){
        cout<<num<<"/"<<den<<endl;
    }


    // Fraction add(Fraction F){
    //     int newNum = this->num*F.den + F.num*this->den;
    //     int newDen = this->den*F.den;
    //     Fraction ans(newNum , newDen);
    //     return ans;
    // }
    Fraction operator+(Fraction F){
        int newNum = this->num*F.den + F.num*this->den;
        int newDen = this->den*F.den;
        Fraction ans(newNum , newDen);
        return ans;
    }
};

int main(){
    Fraction f1(2, 3);
    f1.display();
    Fraction f2(4, 5);
    f2.display();

    // Fraction f3 = f1.add(f2);
    Fraction F4 = f1 + f2;
    F4.display();

    return 0;

}