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
    void print(Cricketer* c){
        cout<<c->name<<" "<<c->rol<<" "<<endl;
    }

};

void change(Cricketer* c){
    (*c).rol = 33;
    c->rol = 43;
}
int main(){

    Cricketer c1("virat",23);
    c1.print();


    int x = 6;
    int *ptr = new int(6);
    
    Cricketer* c2 = new Cricketer("rohith",45);
    c2->print();


    return 0;
}