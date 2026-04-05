//TIME COMPLEXITY FOR TRAVERSING AN ARRAY OF LENGTH 'n'

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = 9;
    for(int i=0; i<n; i++){    //IN THE WORST CASE WE HAVE O(n) OPERATIONS TAKING PLACE
        cout<<arr[i]<<" ";    //O(n) --> THERE ARE 'n' NUMBER OF OPERATIONS GOING ON HERE
    }                        // IF 'n' IS CHANGED, NUMBER OF OPERATIONS WILL ALSO BE CHANGED
    return 0;
}