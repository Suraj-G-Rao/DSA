#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack <string> s;
    // cout<<"TOP --> "<<s.top()<<endl; --> THIS THROWS AN ERROR SINCE STACK IS EMPTY

    s.push("Suraj");
    s.push("G");
    s.push("Rao");

    cout<<"Top --> "<<s.top()<<endl;

    s.pop();

    cout<<"Size After Poping --> "<<s.size()<<endl;

    // TO DELETE ENTIRE STACK 

    while(!s.empty()){
        s.pop();
    }




    return 0;
}