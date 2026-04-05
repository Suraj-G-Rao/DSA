/*
Problem Link  : https://bit.ly/3QhMl6j

SAMPLE INPUT  : [-2,-3,4,-1,-2,1,5,-3]
SAMPLE OUTPUT : 7  {4,-1,-2,1,5}

SAMPLE INPUT  : [-2,-3,4,-1,-2,-1,-5,-3]
SAMPLE OUTPUT : 4  {4}

SAMPLE INPUT  : [-2,-3,-1,-2,-3]
SAMPLE OUTPUT : 0  {}
*/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
pair<int,int> Maximum_Sub_Array_Sum(vector<int> &v ){
    int sum =0,start=-1,end=-1; 
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(sum==0) start=i;
        sum+=v[i];
        if(sum>maxi){
            maxi=sum ;
            end=i;
        }
        if(sum<0)  sum=0;
    }
    if(maxi<0){
        maxi=0;
        start=end=-1;
    }
    cout<<"MAXIMUM SUM --> "<<maxi<<endl;
    return {start,end};
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    auto ans=Maximum_Sub_Array_Sum(v);
    cout<<"Length of sub array --> "<<ans.second-ans.first+1<<endl;
    cout<<"SUB Array --> "<<ans.first<<" "<<ans.second;

    return 0;
}