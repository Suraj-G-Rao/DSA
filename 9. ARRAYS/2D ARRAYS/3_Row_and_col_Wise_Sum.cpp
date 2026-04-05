/*
COL WISE SUM 
SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]  

SAMPLE OUTPUT : Col Sum --> 12 15 18
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
void Col_Wise_Sum(vector<vector<int>> &v){
    for(int i= 0 ; i<v[0].size();i++){
        int sum=0;
        for(int j=0 ; j<v.size();j++){
            sum+=v[j][i];
        }
        cout<<"Sum of COL "<<i+1<<" --> "<<sum<<endl;
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

    Col_Wise_Sum(v);


    return 0;
}
// /*
// ROW WISE SUM 
// SAMPLE INPUT  : [1,2,3
//                  4,5,6
//                  7,8,9]  

// SAMPLE OUTPUT : Row Sum --> 6 15 24
// */
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
// void Row_Wise_Sum(vector<vector<int>> &v){
//     int count=1;
//     for(auto i :v){
//         int sum=0;
//         for(auto j : i){
//             sum+=j;
//         }
//         cout<<"ROW "<<count<<" SUM --> "<<sum<<endl;
//         count++;
//     }
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

//     Row_Wise_Sum(v);


//     return 0;
// }