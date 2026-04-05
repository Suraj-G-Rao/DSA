/*
Given n integers (can be duplicates), print the second smallest integer.
If it does not exist, print -1.

Input1: n = 4
        1 2 2 -4

Output 1: 1

Input 2:n = 5
      1 2 3 1 1

Output 2: 2
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    set<int> s;
    for(auto val: v){
        s.insert(val);
    }
    auto itr = s.begin();
    itr++;
    cout<<"Second smallest number is: "<<*itr;
    
    return 0;
}