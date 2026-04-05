/*

PROBLEM LINK (Variety-1) : http://bit.ly/3yRrCOT
PROBLEM LINK (Variety-2) : https://bit.ly/3QloXof 

SAMPLE INPUT  : [-2,1,3,-4,-2,2]  --> ARRAY ALWAYS CONTAINS EQUAL + AND -VE VALUES
SAMPLE OUTPUT : [1,-2,3,-4,2,-2]
*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
vector<int> Rearrange_by_sign(vector<int> &v ){
    int positive=0,negative=1;
    vector<int>ans(v.size());
    for(auto ele : v){
        if(ele<0){
            ans[negative]=ele;
            negative+=2;
        }
        else{
            ans[positive]=ele;
            positive+=2;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> a(Rearrange_by_sign(v));
    print_vec(a);



    return 0;
}