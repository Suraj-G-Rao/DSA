/*
SORT 0 AND 1 IN AN ARRAY

SAMPLE INPUT  :  [0,1,0,1,0,1,1]
SAMPLE OUTPUT :  [0,0,0,1,1,1,1]
*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n ;i++){
//         cin>>v[i];
//     }
//     int i=0, j=n-1;
//     while(i<j){
//         if(v[i]==1 && v[j]==0){
//             swap(v[i++],v[j--]);
//         }
//         else if(v[i]==0){
//             i++;
//         }
//         else if(v[j]==1){
//             j--;
//         }
//     }
//     for(auto i :v) cout<<i<<" ";


//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n ;i++){
        cin>>v[i];
    }
    int i=0, j=n-1;
    while(i<j){
        while(v[i]==0 & i<j) i++;
        while(v[j]==1 & i<j) j--;
        swap(v[i],v[j]);
        i++;
        j--;

    }
    for(auto i :v) cout<<i<<" ";


    return 0;
}