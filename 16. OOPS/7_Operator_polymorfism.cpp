#include<iostream>
using namespace std;
class Fraction{
public :
    int num ;
    int den;
    Fraction(int num,int den){
        this->num = num;
        this->den = den;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }

    Fraction operator+(Fraction f){
        int newnum = this->num * f.den + f.num * this->den;
        int newden = this->den * f.den;
        Fraction ans(newnum,newden);
        return ans;
    }
    Fraction operator-(Fraction f){
        int newnum = this->num * f.den - f.num * this->den;
        int newden = this->den * f.den;
        Fraction ans(newnum,newden);
        return ans;
    }
    Fraction operator*(Fraction f){
        int newnum = this->num * f.num;
        int newden = this->den * f.den;
        Fraction ans(newnum,newden); 
        return ans;
    }
    Fraction operator/(Fraction f){
        int newnum = this->num * f.den;
        int newden = this->den * f.num;
        Fraction ans(newnum,newden); 
        return ans;
    }

};
int main(){

    Fraction f1(1,2);
    Fraction f2(1,3);

    Fraction f3 = f1 + f2;
    f3.display();

    Fraction f4 = f1 - f2;
    f4.display();

    Fraction f5 = f1 * f2;
    f5.display();

    Fraction f6 = f1 / f2;
    f6.display();

    return 0;
}