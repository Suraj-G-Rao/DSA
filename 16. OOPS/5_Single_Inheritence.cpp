#include<iostream>
using namespace std;
class Scooty{

public :
    int Topspeed;
    float milage;

private :
    int bootspace;
};

class Bike : public Scooty{

public :
    int gears;
};

int main(){

    Bike b1;
    b1.gears =5;
    b1.milage = 60.2;
    b1.Topspeed = 100;


    return 0;
}