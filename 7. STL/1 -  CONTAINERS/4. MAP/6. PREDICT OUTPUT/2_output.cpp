#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>m;

    m.insert({1, 10});
    m.insert({1, 20});
    m.insert({3, 30});
    m[4]= 40;
    for(auto i: m)
    cout<<i.first<<" - "<<i.second<<"\n";
}

/*
OPTIONS:

a) 1 - 10
   3 - 30
   4 - 40 
  
b) 1 - 20
   3 - 30
   4 - 40 
   
c) 1 - 10
   1 - 20
   3 - 30
   4 - 40 
   
d) 1 - 20
   3 - 30
*/

//OUTPUT --> 1 - 10
//           3 - 30
//           4 - 40 