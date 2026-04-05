#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector <int> v={1,2,3,4};

    vector<int> c(v.rbegin(),v.rend());  // --> vec(start , end) end will not be included

    cout<<"Vector v --> ";
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Vector c --> ";
    for(int i: c){
        cout<<i<<" ";
    }
    cout<<endl;



    




    return 0;
}