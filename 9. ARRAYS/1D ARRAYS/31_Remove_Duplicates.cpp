/*
SAMPLE INPUT  : [1,1,2,2,2,3,3]
SAMPLE OUTPUT : [1,2,3]
*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
int Remove_Duplicates(vector<int> &v){
    int i=0,j=1;
    while(j<v.size()){
        if(v[i]!=v[j]){
            v[i+1]=v[j];
            i++;
        }
        j++;
    }
    return i;
}
int main(){
    int n,k;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    k=Remove_Duplicates(v);
    for(int i=0 ;i<=k ;i++){
        cout<<v[i]<<" ";
    }



    return 0;
}