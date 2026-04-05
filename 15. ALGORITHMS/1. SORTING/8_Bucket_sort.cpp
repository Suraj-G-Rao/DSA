/*

TIME COMPLEXITY  : O(N)  AVG CASE : O(N+K)  K--> K ELEMENNTS IN A BUCKET  WORST CASE : O(N^2)
SPACE COMPLEXITY : O(N+K)
BUCKET SORT   : STABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)



*/
#include<iostream>
#include<algorithm>
#include<climits> 
#include<vector>
using namespace std;
void bucket_sort(vector<float> &v){
    int n=v.size();

    vector<vector<float>> a(n,vector<float> ());

    for(int i=0 ; i<n ;i++){
        int index = v[i]*n;
        a[index].push_back(v[i]);
    }

    for(int i=0 ; i<n ; i++){
        if(!a[i].empty()){
            sort(a[i].begin(),a[i].end());
        }
    }

    int k=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<a[i].size() ; j++){
            v[k++]=a[i][j];
        }
    }
}

int main(){

    vector<float> v ={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int n= v.size();
    cout<<"Before : ";
    for(int i=0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }

    bucket_sort(v);
    cout<<endl<<"After : ";
    for(auto i : v){
        cout<<i<<" ";
    }




    return 0;
}