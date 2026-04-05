/*

TIME COMPLEXITY  : O(N * log(N)) IN WORST CASE 
SPACE COMPLEXITY : O(N)
MERGE SORT       : STABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)

DRAWBACKS  :

--> IT REPEATS ALL THE PROCESS EVEN THOUGH ARRAY IS SORTED
--> SLOWER FOR SMALL TASKS
--> IT TAKES EXTRA SPACE OF O(N)

*/
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& v , int s , int e){
    int mid = (s+e)/2;

    int n1 = mid - s +1;
    int n2 = e - mid;

    int *a = new int[n1];
    int *b = new int[n2];

    int k=s;
    for(int i=0 ; i<n1 ; i++) a[i]=v[k++];
    k=mid+1;
    for(int j=0 ; j<n2 ; j++) b[j]=v[k++];

    k=s;
    int i = 0;
    int j = 0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]) v[k++]=a[i++];
        else          v[k++]=b[j++];
    }
    while(i<n1)  v[k++]=a[i++];
    while(j<n2)  v[k++]=b[j++];

    delete[] a;
    delete[] b;

}
void Merge_Sort(vector<int>& v, int s ,int e){
    if(s>=e)  return;
    int mid = (s+e)/2;
    Merge_Sort(v,s,mid);
    Merge_Sort(v,mid+1,e);
    merge(v,s,e);
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

    Merge_Sort(v,0,v.size()-1);
    cout<<endl<<"After : ";
    for(int i=0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}