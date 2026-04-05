/*

LEETCODE : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

SAMPLE INPUT  : [3,4,5,1,2]
SAMPLE OUTPUT : YES 
EXPLANATION   : [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].

SAMPLE INPUT  : [2,1,3,4]
SAMPLE OUTPUT : YES 
EXPLANATION   : There is no sorted array once rotated that can make 

SAMPLE INPUT  : [1,1,1,1,1]
SAMPLE OUTPUT : YES 



*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
bool check(vector<int> &nums)
{
    int cnt = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
            cnt++;
    }
    if (nums[nums.size() - 1] > nums[0])
        cnt++;

    return cnt <= 1;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    if(check(v)) cout<<"Yes";
    else  cout<<"No";


    return 0;
}