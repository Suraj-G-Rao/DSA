/*

PROBLEM LINK  : https://bit.ly/3jLQGSS 

SAMPLE INPUT  : n=6 a=[1,1,2,3,4,6]   
SAMPLE OUTPUT : [1,5]  1 --> Repeated Ele   5--> Missing Ele 

*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
// vector<int> Repeating_Missing_Elements(vector<int> &v)  // TC - O(N)  SC - O(N)
// {
//     int xr=0;
//     vector<int> ans(2);
//     unordered_map<int,int>m;
//     for(int i=0 ; i<v.size();i++){
//         m[v[i]]++;
//         xr^=(v[i]^(i+1));
//     }
//     for(auto it : m){
//         if(it.second>1){
//             ans[0]=it.first;
//             break;
//         }
//     }
//     ans[1]=ans[0]^xr;

//     return ans;
// }
vector<int> Repeating_Missing_Elements(vector<int> &v)
{
    int n=v.size();
    long long sum1 = (n*(n+1))/2,sum2=0;
    long long sum_of_squares_1 = (n*(n+1)*(2*n+1))/6 , sum_of_squares_2=0;
    for(auto ele:v){
        sum2+=ele;
        sum_of_squares_2+=ele*ele;
    }
    long long val1 = sum2-sum1; // X-Y = VAL1
    long long val2 = sum_of_squares_2-sum_of_squares_1; //X2 - Y2 = VAL2
    val2=val2/val1;   //(X-Y)(X+Y) = VAL2 --> X+Y = VAL2 / VAL1
    long long x = (val1+val2)/2;
    long long y = x-val1;
    return {(int)x,(int)y};
}
int main()
{
    int n, m;
    cout << "Enter The Number Of Elements in the array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter The Elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> a(Repeating_Missing_Elements(v));

    cout<<"Repeating Element --> "<<a[0]<<endl;
    cout<<"Missing Element --> "<<a[1]<<endl;




    return 0;
}