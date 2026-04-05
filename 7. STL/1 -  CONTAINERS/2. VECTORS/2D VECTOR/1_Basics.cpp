#include<iostream>
#include<vector>
using namespace std;
int main(){
    //INTIALIZING A 2D VECTOR

    vector<vector<int>> w(4,vector<int>(3,1)); 
    // --> IT CREATES THE ARRAY OF SIZE 4 ROWS AND 3 COLOUMNS WITH EACH ELEMENT AS 1

    for( auto i : w){
        for(auto j :i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    vector<vector<int>> v;

    vector<int> a={1};
    vector<int> b={1,2};
    vector<int> c={1,2,3};
    vector<int> d={1,2,3,4};

    v.emplace_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    for(auto i : v){
        for(auto j :i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // ORIGINAL METHOD

    for(int i=0 ; i<v.size() ; i++){
        for(int j=0 ; j<v[i].size() ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}