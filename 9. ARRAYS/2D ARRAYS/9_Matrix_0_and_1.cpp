/*

PROBLEM LINK  :  https://bit.ly/3CukQke

SAMPLE INPUT  : [1,0,1
                 1,1,1
                 0,1,1]

SAMPLE OUTPUT : [0,0,0
                 0,0,1
                 0,0,0]

SAMPLE INPUT  : [1,0,1
                 1,1,1
                 1,1,1]

SAMPLE OUTPUT : [0,0,0
                 1,0,1
                 1,0,1]

*/
// WITHOUT USING EXTRA SPACE
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
void Matrix_0_and_1(vector<vector<int>> &v){
   int col=1;
   for(int i=0;i<v.size();i++){
     for(int j=0 ;j<v[0].size();j++){
        if(v[i][j]==0){
            v[i][0]=0;
            if(j!=0)   v[0][j]=0;
            else  col=0;
        }
     }
   }

   for(int i=1 ;i<v.size();i++){
    for(int j=1 ; j<v[0].size() ; j++){
        if(v[i][j]!=0){
           if(v[i][0]==0 || v[0][j]==0)
               v[i][j]=0;
        }
    }
   }
    if(v[0][0]==0){
     for(int j=0; j<v[0].size();j++){
         v[0][j]=0;
     }
   }
   if(col==0){
    for(int i=0; i<v.size();i++){
        v[i][0]=0;
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
    Matrix_0_and_1(v);
    print_vec(v);

    return 0;
}

// WITH EXTRA SPACE OF O(N)
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
// void Matrix_0_and_1(vector<vector<int>> &v){
//    vector<int> row(v.size(),1);    // INITIALIZING THE ROW VECTOR WITH 1 IS VERY IMP
//    vector<int> col(v[0].size(),1); // INITIALIZING THE COL VECTOR WITH 1 IS VERY IMP
//    for(int i=0;i<v.size();i++){
//      for(int j=0 ;j<v[0].size();j++){
//         if(v[i][j]==0){
//             row[i]=0;
//             col[j]=0;
//         }
//      }
//    }

//    for(int i=0 ;i<v.size();i++){
//     for(int j=0 ; j<v[0].size() ; j++){
//         if(row[i]==0 || col[j]==0){
//             v[i][j]=0;
//         }
//         else{
//             v[i][j]=1;
//         }
//     }
//    }
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
//     Matrix_0_and_1(v);
//     print_vec(v);

//     return 0;
// }