/*

FROG JUMP :

There are N stones, numbered 1,2,..., N. For each i (1≤i≤N), the height of Stone i is hi.
There is a frog who is initially on Stone 1.
He will repeat the following action some number of times to reach Stone N.
If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. 
Here, a cost of | hi - hj| is incurred, where j is the stone to land on. 00

Find the minimum possible total cost incurred before the frog reaches Stone N.

SAMPLE INPUT  :  n= 4   arr[]=10 30 40 20
SAMPLE OUTPUT :  30 (10-->30-->20) 20+10 =30

SAMPLE INPUT  :  N=7    ARR[] =  2 4 92 85 2 4 2
SAMPLE OUTPUT :  166 (2->4->85->4->2) 2+81+81+2 = 166

*/
#include<iostream>
using namespace std;

int f(int *h, int n, int i){ 

    if (i == n - 1)  return 0;
    if (i == n - 2)  return f(h, n, i + 1) + abs(h[i] - h[i + 1]);

    return  min(f(h, n, i + 1) + abs(h[i] - h[i + 1]), f(h, n, i + 2) + abs(h[i] - h[i + 2]));
}
// THIS APPROACH IS FROM LAST TO FIRST
// int frog_jump(int arr[],int n){

//     if(n==0) return 0;
//     if(n==1) return arr[1]-arr[0];

//     if (abs(arr[n]-arr[n-1])>=abs(arr[n]-arr[n-2])){
//         cout<<"case 1 : "<<abs((arr[n] - arr[n - 2]))<<endl;
//         return abs(frog_jump(arr, n - 2) + abs((arr[n] - arr[n - 2])));
//     }
//     else{
//         cout<<"case 2 : "<<abs((arr[n] - arr[n - 1]))<<endl;
//         return abs(frog_jump(arr, n - 1) + abs((arr[n] - arr[n - 1])));
//     } 
// }
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    int* arr = new int[n];

    cout<<"Enter The Array Elements : ";
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    // cout<<"Sum Of Elements is : "<<frog_jump(arr,n-1)<<endl;
    cout<<"Sum Of Elements is : "<<f(arr,n,0);




    return 0;
}