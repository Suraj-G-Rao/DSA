#include<iostream>
#include<set>
using namespace std;
int main(){

    multiset<string> s;

    s.insert("Apple");
    s.insert("Ball");
    s.insert("Anushree");
    s.insert("College");
    s.insert("Cat");
    s.insert("College");
    s.erase(s.find("College"),s.end());
    for(auto i: s)
    cout<<i<<" ";
}

/*
OPTIONS:

a) Apple Ball Anushree
b) Apple Ball Cat
c) Apple Ball
d) Anushree Apple Ball Cat
*/

//OUTPUT --> Anushree Apple Ball Cat