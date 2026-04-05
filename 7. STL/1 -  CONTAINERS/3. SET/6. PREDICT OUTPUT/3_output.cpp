#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;

    int n=0;
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            if(n%2==0)
                s.insert(i);
            else
                s.insert(j);
            n++;
        }
    }
    for(auto i: s)
    cout<<i<<" ";
}

/*
OPTIONS:
a) 0 0 1 1 2 2 3 3
b) 0 1 2 3
c) 0 1 1 2 3 3
d) Compilation Error
*/

//OUTPUT --> 0 1 2 3