//TO FIND THE AREA OF TRIANGLE USING HERON'S FORMULA

/*
SAMPLE INPUT --> 3 4 5

SAMPLE OUTPUT:
Semiperimeter is: 6
Area of triangle is: 6
*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    double s= (a+b+c)/2;
    cout<<"Semiperimeter is: "<<s<<endl;
    double area= sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle is: "<<area;
    return 0;
}