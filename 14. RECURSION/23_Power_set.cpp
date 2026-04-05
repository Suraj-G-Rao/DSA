/*

PROBLEM LINK : https://leetcode.com/problems/subsets/
POWER SET : IT IS THE COLLECTION SUBSET OF THE GIVEN SET

SAMPLE INPUT  : 1 2 3
SAMPLE OUTPUT : 1 , 2 , 3 , 12 , 13 , 23 , 123

*/
#include<iostream>
#include<vector>
using namespace std;
void power_set(int *arr , int n,int i , vector<int> sum , vector<vector<int>> &result){
    if(i>=n){
        result.push_back(sum);
        return;
    }
    power_set(arr,n,i+1,sum,result);         // ELEMENT WILL NOT BE PRESENT IN SUBSET
    int ele = arr[i];
    sum.push_back(arr[i]);
    power_set(arr,n,i+1,sum,result); 

}
int main(){
    int arr[] = {1,2,3};
    vector<vector<int>> result;
    vector<int> sum;
    power_set(arr,3,0,sum,result);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }



    return 0;
}