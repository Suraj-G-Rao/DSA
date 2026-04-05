/*
ARRAY WITH BOTH POSITIVE AND NEGATIVE VALUES

SAMPLE INPUT  : [1,0,-1,0] sum = 0
SAMPLE OUTPUT : 4
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}

int getLongestSubarray(vector<int>&v, int k) {
    int maxlen =0,i,sum=0;
    map<int,int>m;
    for(i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        else if(m.find(sum-k)!=m.end()){
            maxlen=max(maxlen,(i)-m.find(sum-k)->second);
        }
        else if(m.find(sum-k)==m.end()){
            m[sum]=i;
        }
    }
    return maxlen;
}
// int getLongestSubarray(vector<int>& a, long long k) {
//     int n = a.size(); // size of the array.

//     int left = 0, right = 0; // 2 pointers
//     long long sum = a[0];
//     int maxLen = 0;
//     while (right < n) {
//         // if sum > k, reduce the subarray from left
//         // until sum becomes less or equal to k:
//         while (left <= right && sum > k) {
//             sum -= a[left];
//             left++;
//         }

//         // if sum = k, update the maxLen i.e. answer:
//         if (sum == k) {
//             maxLen = max(maxLen, right - left + 1);
//         }

//         // Move forward thw right pointer:
//         right++;
//         if (right  < n) sum += a[right];
//     }

//     return maxLen;
// }
int main(){
    int n,k;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<"Enter The Value of 'k' --> ";
    cin>>k;

    cout<<"The Longest Sub Array is "<<getLongestSubarray(v,k);



    return 0;
}



// ARRAY WID ONLY POSITIVE VALUES
// /*
// SAMPLE INPUT  : [1,2,3,4,2] sum = 3
// SAMPLE OUTPUT : 2 [1,2]
// */


// #include<iostream>
// #include<vector>
// using namespace std;
// void print_vec(vector<int> &v){
//     for(auto i :v) cout<<i<<" ";
// }
// int getLongestSubarray(vector<int> nums, long long k) {
//     int i=0,j=0,longlen=0,len=0;
//     long long sum=nums[0];
//     while(i<nums.size() && j<nums.size()){
//         while(i<=j && sum>k){
//             sum-=nums[i];
//             i++;
//         }
//         if(sum==k){
//             len = j-i+1;
//             longlen=max(longlen,len);
//         }
//         j++;
//         if(j<nums.size()) sum+=nums[j];

        
//     }
//     return longlen;
// }

// // int getLongestSubarray(vector<int>& nums, int k){
// //     // Write your code herewhile
// //     int i=0,j=0,longlen=0,len=0,sum=0;
// //     while(i<nums.size() && j<nums.size()){
// //         sum+=nums[j];
// //         if(sum<k) j++;
// //         else if(sum==k){
// //             len = j-i+1;
// //             longlen=max(longlen,len);
// //             j++;
// //         }
// //         else{
// //             sum-=nums[i];
// //             i++;
// //         }
// //     }
// //     return longlen;
// // }
// int main(){
//     int n,k;
//     cout<<"Enter The Number Of Elements : ";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter The Elements : ";
//     for(int i=0;i<n;i++) cin>>v[i];

//     cout<<"Enter The Value of 'k' --> ";
//     cin>>k;

//     cout<<"The Longest Sub Array is "<<getLongestSubarray(v,k);



//     return 0;
// }