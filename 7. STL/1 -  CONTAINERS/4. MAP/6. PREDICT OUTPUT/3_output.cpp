#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,char>m = {{1, 'a'}, {2, 'b'}, {3, 'c'}, {4, 'd'}};
    m.erase(m.find(3), m.end());

    for(auto i:m)
    cout<<i.first<<" - "<<i.second<<"\n";
}

/*
OPTIONS:

a) 1 - a
   2 - b
   4 - d
   
b) 1 - a
   2 - b
   3 - c
   4 - d
   
c) 1 - a
   2 - b
   
d) Compilation error
*/

//OUTPUT --> 1 - a
//           2 - b