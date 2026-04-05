//TIME COMPLEXITY WHEN TRAVERSING 2 INDIVIDUAL ARRAYS OF LENGTH 'm' AND 'n' RESPECTIVELY

#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5,6,7,8,9};
    int n = 9;
    int arr2[]={10,20,30,40,50,60,70,80};
    int m = 8;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i<n; i++){  //3n OPERATIONS --> 3 NEGLIGIBLE (CONSTANT), SO 'n' OPERATIONS
        sum1+= arr1[i];
    }
    for(int i=0; i<m; i++){  //3m OPERATIONS --> 3 NEGLIGIBLE (CONSTANT), SO 'm' OPERATIONS
        sum2+= arr2[i];
    }
    cout<<sum1<<" "<<sum2; // IN THE WORST CASE, WE HAVE O(n+m) OPERATIONS TAKIING PLACE
    return 0;
}