//TO FIND THE VOLUME OF SPHERE

// SAMPLE INPUT --> 5

// SAMPLE OUTPUT --> Volume of sphere is: 523.333


#include<iostream>
using namespace std;
int main(){
    float r,vol;
    cin>>r;
    vol= 4*3.14*r*r*r/3;
    cout<<"Volume of sphere is: "<<vol<<endl;
    return 0;
}