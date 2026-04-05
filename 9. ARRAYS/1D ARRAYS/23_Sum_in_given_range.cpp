/*
SAMPLE INPUT  : [1,2,3,4,5]  l=2 r=4
SAMPLE OUTPUT : 9 (2+3+4)
*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
int main(){
    int n,l,r;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];
    
    for(int i=1;i<n;i++){
       v[i]+=v[i-1];
    }
    print_vec(v);
    cout<<endl;
    cout<<"Enter The value of 'l' and 'r' --> ";
    cin>>l>>r;
    cout<<v[r-1]-v[l-2];

    return 0;
}