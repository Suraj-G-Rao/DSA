/*
SAMPLE INPUT  : [1,2,3,4,5]
SAMPLE OUTPUT : [1,3,6,10,15]
*/

// FIRST APPROACH 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,ele;
//     cin>>n;
//     vector<int> v(n);
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     ans.push_back(v[0]);

//     for(int i=1;i<n;i++){
//         ans.push_back(v[i]+ans[i-1]);
//     }
//     for(auto ele : ans) cout<<ele<<" ";



//     return 0;
// }

// SECOND APPROACH
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,ele;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=1;i<n;i++){
       v[i]+=v[i-1];
    }
    for(auto ele : v) cout<<ele<<" ";



    return 0;
}