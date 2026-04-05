/*

PROBLEM LINK : https://bit.ly/3jLfElm

SAMPLE INPUT  : [4,2,2,6,4]     k = 6
SAMPLE OUTPUT : 4 -->   [4,2] [4,2,2,6,4] [6] [2,2,6]

*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
int No_Of_Sub_Array(vector<int> v, int k) {
    int count=0,XOR=0;
    unordered_map<int,int> m;
    m[0]=1;
    for(auto ele :v){
        XOR^= ele;
        count+=m[XOR^k];
        m[XOR]++;
    }
    return count;
}

int main(){
    int n,k;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<"Enter The Value of 'k' --> ";
    cin>>k;

    cout<<"Total No. Of Sub Array with XOR 'k' is --> "<<No_Of_Sub_Array(v,k);



    return 0;
}