/*

TIME COMPLEXITY  : O(N^2) WORST CASE  , O(N^2) IN BEST CASE
SPACE COMPLEXITY : O(1)
NO. OF SWAPS     : N
SELECTION SORT   : UNSTABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)

*/
#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>& v){
    int n=v.size();
    for(int i=0 ; i<n-1 ; i++){
        int min_index = i;
        for(int j=i+1 ; j<n ; j++){
            if(v[min_index]>v[j]){
                min_index = j;
            }
        }
        if(min_index!=i)   swap(v[i],v[min_index]);
    }
}

int main(){

    int n;
    cout<<"Enter The size : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter The Array elements : ";

    for(int i=0 ;i<n ;i++){
        cin>>v[i];
    }
    cout<<"Before : ";
    for(int i=0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }

    selection_sort(v);
    cout<<endl<<"After : ";
    for(int i=0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }




    return 0;
}