/*
SAMPLE INPUT  : [2,3,4,5,6,7,3,7]
SAMPLE OUTPUT : 6

SAMPLE INPUT  : [-2,-3,4,-5,-6,-7,-3,-7]
SAMPLE OUTPUT : -2
*/
#include<iostream>
#include<climits>
#include<vector>
#include<set>
using namespace std;
int Second_large(vector<int> &v){  //--> O(N)
    int Second_large;
    int large = INT_MIN;
    for(auto ele :v){
        if(ele>large){
            Second_large=large;
            large=ele;
        }
        else if(ele>Second_large && ele!= large){
            Second_large = ele;
        }
    }
    return Second_large;
}
// int Second_large(vector<int> &v){  //--> O(N log(N))
//     set<int>s;
//     for(auto i :v){
//         s.insert(i);
//     }
//     // for(auto i : s){
//     //     cout<<i<<" ";
//     // }
//     auto end_itr=s.end();
//     advance(end_itr,-2);
//     return *end_itr;
// }
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The Second Largest Element --> "<<Second_large(a);

}