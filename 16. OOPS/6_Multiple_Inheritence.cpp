#include<iostream>
using namespace std;
class Vehicle{

public :
    int Topspeed;
    float milage;
};
class GearedVehicle{
public:
    int gears;
};
class TwoWheeler : public Vehicle{

public :
    int Helmet ;
};
class Bike : public TwoWheeler , public GearedVehicle{

    string name;
};
int main(){

    Bike b1;
    b1.gears =5;
    b1.milage = 60.2;
    b1.Topspeed = 100;


    return 0;
}