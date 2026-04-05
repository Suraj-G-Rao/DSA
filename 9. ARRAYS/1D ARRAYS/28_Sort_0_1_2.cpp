/*

SORT 0 1 2 --> https://bit.ly/3CsgYAa

SAMPLE INPUT  : [2,1,2,0,0,2]
SAMPLE OUTPUT : [0,0,1,2,2,2]

SAMPLE INPUT  : [1,2,1,0,0,0]
SAMPLE OUTPUT : [0,0,0,1,1,2]

SAMPLE INPUT  : [0,0,1,2,1,2]
SAMPLE OUTPUT : [0,0,1,1,2,2]

SAMPLE INPUT  : [0,0,1,0,1,2]
SAMPLE OUTPUT : [0,0,0,1,1,2]

SAMPLE INPUT  : [1,1,1,1,1,0,2,0,1,0]
SAMPLE OUTPUT : [0,0,0,0,1,1,1,1,1,2]


*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
void Sort_0_1_2(vector<int>& arr)
{
    // Write your code here
    int low =0 ,mid=0 , high=arr.size()-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1) mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
// void Sort_0_1_2(vector<int> &v){
//     int i=0,j=v.size()-1;
//     while(i<j){
//         if(v[i]==0) i++;
//         if(v[j]==2) j--;
//         if(v[i]>v[j]){
//             swap(v[i],v[j]);
//         }
//         else if(v[i]==v[j]){
//             if(v[i+1]==0) j--;
//             else  i++;
//         }
//     }
// }
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    Sort_0_1_2(v);

    print_vec(v);



    return 0;
}