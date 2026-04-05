/*
SAMPLE INPUT  : [1,2,3,3,4]  [4,5]
SAMPLE OUTPUT : [4]
*/
#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> Array_intersection(vector<int>& v1 , vector<int>& v2){
    vector<int> v;
    int i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]) i++;
        else if(v1[i]>v2[j]) j++;
        else{
            v.emplace_back(v1[i]);
            i++;
            j++;
        }
    }

    return v;
}
// vector<int> Array_intersection(vector<int>& v1 , vector<int>& v2){
//     set<int> s1(v1.begin(),v1.end());
//     set<int> s2(v2.begin(),v2.end());

//     vector<int> v;
//     if(s1.size()>=s2.size()){
//         for(auto i :s2){
// 			if((s1.find(i))!= s1.end()){
// 				v.emplace_back(i);
//             }
// 		}
//     }
//     else{
//         for(auto i :s1){
// 			if((s2.find(i))!= s2.end()){
// 				v.emplace_back(i);
// 			}
// 		}
//     }
//     return v;
// }
int main(){
    int n,m;
    cout<<"Enter The Size of 1st ARRAY : ";
    cin>>n;
    vector<int> v1(n);
    cout<<"Enter The Elements Of The 1st Array : ";
    for(int i=0 ; i<n; i++) cin>>v1[i];

    
    cout<<"Enter The Size of 2nd ARRAY : ";
    cin>>m;
    vector<int> v2(m);
    cout<<"Enter The Elements Of The 2nd Array : ";
    for(int i=0 ; i<m; i++) cin>>v2[i];

    vector<int> a(Array_intersection(v1,v2));

    for(int ele : a) cout<<ele<<" ";


}