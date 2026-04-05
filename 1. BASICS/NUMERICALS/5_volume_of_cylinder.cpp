//TO FIND THE VOLUME OF CYLINDER

/*
SAMPLE INPUT:
Enter radius: 4
Enter height: 5

SAMPLE OUTPUT --> Volume of cylinder is: 251.2
*/


#include<iostream>
using namespace std;
int main(){
    float r,h,vol;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Enter height: ";
    cin>>h;
    vol= 3.14*r*r*h;
    cout<<"Volume of cylinder is: "<<vol;
    return 0;
}