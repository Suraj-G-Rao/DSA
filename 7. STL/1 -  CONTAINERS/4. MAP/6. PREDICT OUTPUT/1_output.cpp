#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,int>m;
    m.insert({1,1});
    m.insert({2,4});
    m.insert({3,9});
    m.insert({4,16});
    m.insert({4,20});

    auto a = m.equal_range(4);  //equal_range(key) --> RETURNS BOUNDS OF RANGEOF ELEMENTS WITH THE KEY PASSED
    for(auto it = a.first; it != a.second; it++){
        cout<<it->first<<"-->"<<it->second<<endl;
    }
    return 0;
}

/*
OPTIONS:

a) 4--> 16

b) 4--> 16
   4--> 20
   
c) 1--> 1
   2--> 4
   3--> 9
   4--> 16
   4--> 20
   
d) Compilation Error
*/

//OUTPUT --> 4--> 16
//           4--> 20
   