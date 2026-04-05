#include<iostream>
using namespace std;
class Cricketer{

public :

    int rol;
    string name;

    Cricketer(string name , int rol){
        (*this).rol = rol;
        (*this).name = name;
    }

    void print(){
        cout<<name<<" "<<rol<<" "<<endl;
    }

};

void change(Cricketer* c){
    (*c).rol = 33;
    c->rol = 43;
}
int main(){

    Cricketer c1("virat",23);
    Cricketer c2("rohith",45);

    change(&c1);
    c1.print();
    c2.print();



    return 0;
}