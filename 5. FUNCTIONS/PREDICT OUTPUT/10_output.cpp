#include<iostream>
using namespace std;
void copy(int& a, int& b, int& c){
    a *= 2;
    b *= 2;
    c *= 2;
}
int main(){
    int x = 2, y = 5, z = 7;
    copy(x,y,z);
    cout<<"x = "<<x<<", y = "<<y<<", z = "<<z;
    return 0;
}

/*
OPTIONS:
a) x = 3, y = 6, z = 5
b) x = 3, y = 7, z = 10
c) x = 4, y = 10, z = 14
d) None of the above
*/

//OUTPUT --> x = 4, y = 10, z = 14