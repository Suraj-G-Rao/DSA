/*

ROTATE AN ARRAY

PROBLEM LINK  : https://leetcode.com/problems/rotate-image/description/

SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]

SAMPLE OUTPUT : [7,4,1
                 8,5,2
                 9,6,3]
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
    for(int i=0;i<n;i++){
        for(int j=0 ; j<i ;j++){
            swap(v[i][j],v[j][i]);
        }
    }
}
void Rotate_Matrix(vector<vector<int>> &v){
    Transpose_Matrix(v);
    for(int i=0;i<v.size();i++){
        for(int j=0 ; j<(v[0].size())/2 ; j++){
            swap(v[i][j],v[i][v[0].size()-j-1]);
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
    Rotate_Matrix(v);
    print_vec(v);

    return 0;
}
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
// vector<vector<int>> Rotate_Matrix(vector<vector<int>> &v){
//     vector<vector<int>> ans(v[0].size(),vector<int>(v.size()));
//     for(int i=0;i<v.size();i++){
//         for(int j=0 ; j<v[0].size() ; j++){
//             ans[j][v.size()-i-1]=v[i][j];
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
//     vector<vector<int>>a(Rotate_Matrix(v));
//     print_vec(a);

//     return 0;
// }