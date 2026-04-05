/*
SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]

SAMPLE OUTPUT : [1,4,7
                 2,5,8
                 3,6,9]
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
void Transpose_Matrix(vector<vector<int>> &v){
    int n=v.size(),m=v[0].size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1 ; j<n ;j++){
            swap(v[i][j],v[j][i]);
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter The size Of rows and columns : ";
    cin>>n>>m;

    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++){
        for(int j=0 ; j<m ;j++){
            cin>>v[i][j];
        }
    }
    Transpose_Matrix(v);
    print_vec(v);

    return 0;
}
/*
SAMPLE INPUT  : [1,2,3
                 4,5,6]

SAMPLE OUTPUT : [1,4
                 2,5
                 3,6]
*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void print_vec(vector<vector<int>> &v){
//     for(auto i :v){
//         for(auto j : i){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// vector<vector<int>> Transpose_Matrix(vector<vector<int>> &v){
//     int n=v.size(),m=v[0].size();
//     vector<vector<int>> ans(m,vector<int>(n));
//     for(int i=0;i<m;i++){
//         for(int j=0 ; j<n ;j++){
//             ans[i][j]=v[j][i];
//         }
//     }
//     return ans;
// }
// int main(){
//     int n,m;
//     cout<<"Enter The size Of rows and columns : ";
//     cin>>n>>m;

//     vector<vector<int>>v(n,vector<int>(m));
//     cout<<"Enter The Elements : ";
//     for(int i=0;i<n;i++){
//         for(int j=0 ; j<m ;j++){
//             cin>>v[i][j];
//         }
//     }
//     vector<vector<int>> a(Transpose_Matrix(v));
//     print_vec(a);

//     return 0;
// }