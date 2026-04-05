#include<iostream>
#include<vector>
using namespace std;
void sum_subset(int *arr , int n,int i , int sum , vector<int> &result){
    if(i==n){
        result.push_back(sum);
        return;
    }
    sum_subset(arr,n,i+1,sum+arr[i],result);  // ELEMENT WILL BE PRESENT IN SUBSET
    sum_subset(arr,n,i+1,sum,result);         // ELEMENT WILL NOT BE PRESENT IN SUBSET

}
int main(){
    int arr[] = {1,2,3};
    vector<int> result;
    sum_subset(arr,3,0,0,result);

    for(auto i : result) cout<<i<<" ";



    return 0;
}