/*

TIME COMPLEXITY  : O(N^2) IN WORST CASE 
SPACE COMPLEXITY : O(1)
NO. OF SWAPS     : N(N-1)/2
BUBBLE SORT      : STABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)

*/
#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int>& v){
    int n= v.size();
    for(int i=0 ; i<n-1 ; i++){
        bool flag = false;
        for(int j=0 ; j< n-i-1 ; j++){
            if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
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

    bubble_sort(v);
    cout<<endl<<"After : ";
    for(int i=0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }




    return 0;
}