/*

TIME COMPLEXITY  : O[D*(N + Max_Element)]  D--> NO. OF DIGITS OF MAX ELEMENTS
SPACE COMPLEXITY : O(N)
RADIX SORT   : STABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)

DISAVANTAGES :

--> NOT PREFERABLE TO USE WHEN MAX_ELE WILL BE LARGE
--> CANNOT USE THIS ALGORITHM WHEN WE CONTAIN FLOATING NUMBERS (3.2) VALUES



*/
#include<iostream>
#include<climits> 
#include<vector>
using namespace std;
void count_sort(vector<int>& v,int pos){
    

    int n=v.size();
    vector<int> freq(10,0);

    for(int i=0 ; i<n ; i++){
        freq[(v[i]/pos)%10]++;
    }

    for(int i=1 ; i<10 ; i++){
        freq[i]+=freq[i-1];
    }

    vector<int> a(n);
    for(int i=n-1 ; i>=0 ; i--){
        a[--freq[(v[i]/pos)%10]]=v[i];
    }

    for(int i=0 ; i<n ;i++){
        v[i]=a[i];
    }

}
void radix_sort(vector<int> &v){
    int n=v.size();
    int maxi = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(v[i]>maxi) maxi=v[i];
    }
    for(int pos=1 ; maxi/pos>0 ; pos*=10){
        count_sort(v,pos);
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

    radix_sort(v);
    cout<<endl<<"After : ";
    for(auto i : v){
        cout<<i<<" ";
    }




    return 0;
}