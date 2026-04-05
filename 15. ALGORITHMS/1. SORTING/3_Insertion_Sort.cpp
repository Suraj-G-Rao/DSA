/*

TIME COMPLEXITY  : O(N^2) WORST CASE  , O(N) IN BEST CASE
SPACE COMPLEXITY : O(1)
NO. OF SWAPS     : N
INSERTION SORT   : STABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)

*/
#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>& v){
    int n=v.size();
    for(int i=1 ; i<n ; i++){
        int j= i-1;
        int current = v[i];
        while(j>=0 && v[j]>current){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current;
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