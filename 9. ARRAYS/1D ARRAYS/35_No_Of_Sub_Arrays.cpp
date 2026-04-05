/*

PROBLEM LINK : http://bit.ly/3Kn10eZ

SAMPLE INPUT  : [1,2,3,-3,1,1,1,4,2,-3] k = 3
SAMPLE OUTPUT : 8

*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
int No_Of_Sub_Array(vector<int> v, int k) {
    int count=0,sum=0;
    unordered_map<int,int>m;
    m[0]=1;  //--> THIS IS VERY IMPORTANT SINCE WHEN WE CHECK SUM-K == 0 MAP SHOULD CONTAIN 0 OR ELSE IT WONT WORK 
    for(auto ele :v){
        sum+=ele;
        count+= m[sum-k];
        m[sum]++;
    }
    for(auto i : m){
        cout<<i.first <<" --> "<<i.second<<endl;
    }
    return count;
}

int main(){
    int n,k;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<"Enter The Value of 'k' --> ";
    cin>>k;

    cout<<"Total No. Of Sub Array is --> "<<No_Of_Sub_Array(v,k);



    return 0;
}