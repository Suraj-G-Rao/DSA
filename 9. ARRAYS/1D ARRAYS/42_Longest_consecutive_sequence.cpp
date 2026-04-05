/*
PROBLEM LINK : https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740

SAMPLE INPUT  : [5,8,3,2,1,4]
SAMPLE OUTPUT :  5 [1,2,3,4,5]
*/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
int Longest_consecutive_sequence(vector<int> &v ){
    if(v.size()==0)  return 0;
    unordered_set<int> s;
    int longest=0;
    for(int i=0;i<v.size() ;i++)   s.insert(v[i]);

    for(auto it : s){
        int count=1;
        if(s.find(it-1)==s.end()){
            while(s.find(it+1)!= s.end()){
                it+=1;
                count++;
            }
        }
        longest=max(longest,count);
    }
    


    return longest;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<Longest_consecutive_sequence(v);




    return 0;
}