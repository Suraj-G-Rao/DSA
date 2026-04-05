#include<iostream>
#include<vector>
using namespace std;
bool check_pow(int x){
    return x>0 && (x&(x-1))==0;

}
int main(){
    int n ;
    cin>>n;

    int arr[n];
    int cnt=0;
    vector<int> ans;

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        if(check_pow(arr[i])){
            ans.push_back(arr[i]);
            cnt++;
        }
    }
    int f=1;
    for(int j=0 ; j<cnt ;j++){
        f *= 2;
    }
    cout<<"ans : "<<f-1<<endl;

    return 0;

}