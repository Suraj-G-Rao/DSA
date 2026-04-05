/*

SAMPLE INPUT  : [1,2,3,4,2]
SAMPLE OUTPUT : YES (1+2+3==4+2)

*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
bool check_pre_suf(vector<int>&v,int sum){
    int prefix_sum=0,suffix_sum=sum-prefix_sum;
    for(int i=0 ; i<v.size();i++){
        prefix_sum+=v[i];
        suffix_sum=sum-prefix_sum;
        if(prefix_sum==suffix_sum) return true ;
    }
    return false;
}
int main(){
    int n,sum=0;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }

    if(check_pre_suf(v,sum)) cout<<"YES";
    else cout<<"NO";


    return 0;
}