/*

SAMPLE INPUT  : [ 1 , 2 , 3 , 4 , 5 ]   SUM=5
SAMPLE OUTPUT : [ [1,4] , [2,3]]  --> OUTPUT SHOULD BE IN SORTED MANNER

SAMPLE INPUT  : [ 2 , -3 , 3 , 3 , -2 ] SUM =0
SAMPLE OUTPUT : [ [-3,3] , [-3,3] , [-2,2] ]

SAMPLE INPUT  : [ 2 , -3 , 2 , 3 , 2 ] SUM =4
SAMPLE OUTPUT : [ [2,2] , [2,2] , [2,2] ]
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairSum(vector<int> &v, int s){
   vector<vector<int>>ans;
   
   for(int i=0; i<v.size() ;i++){
      for(int j=i+1 ; j<v.size() ;j++){
         if(v[i]+v[j]==s){
            vector<int> temp;
            temp.emplace_back(min(v[i],v[j]));
            temp.emplace_back(max(v[i],v[j]));
            ans.emplace_back(temp);
         }
      }
   }
   sort(ans.begin(),ans.end());
   return ans;
}
int main(){
    int n,sum;
    cout<<"Enter The Number of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements --> ";
    for(int i=0 ;i<n; i++){
        cin>>v[i];
    }
    cout<<"Enter The Sum --> ";
    cin>>sum;
    vector<vector<int>> a(pairSum(v,sum));
    for(int i=0;i<a.size();i++){
        for(int j=0 ; j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// SECOND APPROACH

// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> pairSum(vector<int> &v, int s){
//     vector<vector<int>> ans;
//     unordered_map<int,int>m;
//     for(auto i :v){
//         vector<int> temp;
//         if(m.find(s-i)!= m.end()){
//             temp.emplace_back(min(i,s-i));
//             temp.emplace_back(max(i,s-i));
//             ans.emplace_back(temp);
//         }
//         m[i]++;
        
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }
// int main(){
//     int n,sum;
//     cout<<"Enter The Number of Elements : ";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter The Elements --> ";
//     for(int i=0 ;i<n; i++){
//         cin>>v[i];
//     }
//     cout<<"Enter The Sum --> ";
//     cin>>sum;
//     vector<vector<int>> a(pairSum(v,sum));
//     for(int i=0;i<a.size();i++){
//         for(int j=0 ; j<2;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// THIRD APPROACH 

// #include <bits/stdc++.h>
// using namespace std;

// string twoSum(int n, vector<int> &arr, int target) {
//     sort(arr.begin(), arr.end());
//     int left = 0, right = n - 1;
//     while (left < right) {
//         int sum = arr[left] + arr[right];
//         if (sum == target) {
//             return "YES";
//         }
//         else if (sum < target) left++;
//         else right--;
//     }
//     return "NO";
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 1: " << ans << endl;
//     return 0;
// }
