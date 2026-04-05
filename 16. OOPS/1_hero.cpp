#include<iostream>
using namespace std;
class hero{

    public:// Empty Class
    int health;
};
void print(hero c){
    cout<<c.health<<endl;
}
void change1(hero c){ //PASS BY VALUE
    c.health = 10;
}
void change2(hero& c){ // PASS BY REFERENCE
    c.health = 10;
}
int main(){
    hero h1;
    h1.health = 78;
    hero h2;
    h2.health = 74;
    hero h3;
    h3.health = 72;
    hero h4;
    h4.health = 71;


    print(h1);
    change1(h1);
    print(h1);
    change2(h1);
    print(h1);

}