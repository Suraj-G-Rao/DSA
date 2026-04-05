/*
ROTATE THE ARRAY BY K TIMES
https://leetcode.com/problems/rotate-array/description/

SAMPLE INPUT  :  [1,3,4,5,6]  K=2
SAMPLE OUTPUT :  [5,6,1,3,4]

SAMPLE INPUT  :  [1,3,4,5,6]  K=7
SAMPLE OUTPUT :  [5,6,1,3,4]  --> IT IS SIMILAR AS WE ROTATE BY K=2 SINCE K%N

SAMPLE INPUT  :  [1,3,4,5,6]  K=5
SAMPLE OUTPUT :  [1,3,4,5,6]
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Rotate_array_k(vector<int> &v ,int k){
                                      // 1 2 3 4 5
    reverse(v.begin(),v.end());       // 5 4 3 2 1
    reverse(v.begin()+k,v.end());     // 5 4 1 2 3
    reverse(v.begin(),v.begin()+k);   // 4 5 1 2 3

    return v;
}
int main(){
    int n,k;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"Enter The Value Of 'k' : ";
    cin>>k;
    vector<int> a(Rotate_array_k(v,(k%n)));

    for(auto ele :a) cout<<ele<<" ";

}