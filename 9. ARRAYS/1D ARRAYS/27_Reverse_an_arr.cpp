/*
Given an array/list 'ARR' of integers and a position 'M'. You have to reverse the array after that position.

We have an array ARR = {1, 2, 3, 4, 5, 6) and M = 3,
considering 0 based indexing so the subarray [5, 6} will be reversed and our 1,2, 3, 4, 6, 5.
output array will be [1, 2, 3, 4, 6 , 5]

SAMPLE INPUT  : [1,2,3,4,5,6]  m=3
SAMPLE OUTPUT : [1,2,3,4,6,5]
*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int i=m+1,j=arr.size()-1;
	while(i<=j){
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
}
int main(){
    int n,m;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"Enter The Value Of 'm' --> ";
    cin>>m;

    reverseArray(v,m);

    print_vec(v);

    return 0;
}