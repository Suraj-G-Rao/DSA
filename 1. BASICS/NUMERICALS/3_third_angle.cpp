//TO FIND THE THIRD ANGLE OF THE TRIANGLE

// SAMPLE INPUT --> 30 45

// SAMPLE OUTPUT --> Third angle of triangle is: 105

#include<iostream>
using namespace std;
int main(){
    int ang1,ang2,ang3;
    cin>>ang1>>ang2;
    ang3= 180-(ang1+ang2);
    cout<<"Third angle of triangle is: "<<ang3;
    return 0;
}