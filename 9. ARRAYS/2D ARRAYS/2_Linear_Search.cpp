/*
SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]   key = 9

SAMPLE OUTPUT : Yes

SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]   key = 10

SAMPLE OUTPUT : No
*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<vector<int>> &v){
    for(auto i :v){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
bool Transpose_Matrix(vector<vector<int>> &v,int key){
    for(auto i :v){
        for(auto j : i){
            if(j==key) return true;
        }
    }


    return false;
}
int main(){
    int n,m,key;
    cout<<"Enter The size Of rows and columns : ";
    cin>>n>>m;

    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++){
        for(int j=0 ; j<m ;j++){
            cin>>v[i][j];
        }
    }

    cout<<"Enter The Element to search : ";
    cin>>key;

    if(Transpose_Matrix(v,key)) cout<<"Yes";
    else cout<<"No";


    return 0;
}