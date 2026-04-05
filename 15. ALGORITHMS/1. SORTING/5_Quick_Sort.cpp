/*

PROBLEM : https://bit.ly/3qZ6LEC

TIME COMPLEXITY  : O(N * log(N)) IN BEST CASE  , O(N^2) IN WORST CASE
SPACE COMPLEXITY : O(N)
QUICK SORT       : NOT STABLE SORT ALGORITHM (RELATIVE ORDER DOESNOT CHANGE FOR SAME ELEMENTS)

ADVANTAGES :

--> PREFERED TO USE THIS ALGORITHM FOR COST EFFECTIVNESS (IT DOESN'T TAKE EXTRA SPACE)

DRAWBACKS  :

--> WE CANNOT USE THIS FOR LINKED LIST
--> MERGE SORT IS PREFERABLE THAN QUICK SORT WHEN DATASETS ARE LARGE 

*/
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v , int s , int e){

    int pivot = v[s];
    int count=0;

    for(int i=s+1 ; i<=e ; i++){
        if(v[i]<=pivot) count++;
    }
    

    int p = s+count;
    swap(v[s],v[s+count]);
    int i= s , j=e;

    while(i<p && j>p){

        while(v[i]<=pivot) i++;
        while(v[j]>pivot) j--;

        if(i<p && j>p){
            swap(v[i],v[j]);
        }
        i++;
        j--;
    }

    return p;

}
void Quick_Sort(vector<int>& v, int s ,int e){
    if(s>=e)  return;

    int p = partition(v,s,e);
    Quick_Sort(v,s,p-1);
    Quick_Sort(v,p+1,e);

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

    Quick_Sort(v,0,v.size()-1);
    cout<<endl<<"After : ";
    for(int i=0 ;i<n ;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}