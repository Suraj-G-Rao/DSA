/*

TIME COMPLEXITY  : O(N + Max_Element) 
SPACE COMPLEXITY : O(N)
COUNT SORT   : STABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)

DISAVANTAGES :

--> NOT PREFERABLE TO USE WHEN MAX_ELE WILL BE LARGE
--> CANNOT USE THIS ALGORITHM WHEN WE CONTAIN FLOATING NUMBERS (3.2) VALUES

COUNT SORT FOR NEGATIVE NUMBERS :

--> FIRST FIND THE MIN ELEMENT THROUGHT THE ARRAY 
--> ADD THE -(MIN_ELE) THROUGHT THE ARRAY
--> NOW WE OBTAIN ALL THE POSITIVE ELEMENTS IN THE ARRAY , SO APPLY COUNT SORT
--> AFTER SORTING SUBTRACT THE MIN_ELE FROM ALL THE ELEMENTS



*/
#include<iostream>
#include<climits> 
#include<vector>
using namespace std;
vector<int> count_sort(vector<int>& v){
    int n=v.size();
    int maxi = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(v[i]>maxi) maxi=v[i];
    }

    int m=maxi+1;
    vector<int> freq(m,0);

    for(int i=0 ; i<n ; i++){
        freq[v[i]]++;
    }

    for(int i=1 ; i<m ; i++){
        freq[i]+=freq[i-1];
    }

    vector<int> a(n);
    for(int i=n-1 ; i>=0 ; i--){
        a[--freq[v[i]]]=v[i];
    }


    return a;

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

    vector<int> b(count_sort(v));
    cout<<endl<<"After : ";
    for(auto i : b){
        cout<<i<<" ";
    }




    return 0;
}