/*
SORT THE ARRAY OF THE SQAURE NO. GIVEN INPUT ARRAY IN INCREASING ORDER

SAMPLE INPUT  : [-10,-2,3,4,5]  --> ARRAY WILL BE SORTED
SAMPLE OUTPUT : [4,9,16,25,100]

SAMPLE INPUT  : [-10,-2,1,2,10]  --> ARRAY WILL BE SORTED
SAMPLE OUTPUT : [1,4,4,100,100]
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> sort_square(vector<int> &v){
    int i=0,j=v.size()-1;
    vector<int>ans;
    while(i<=j){
        if(abs(v[i])>abs(v[j])){
            ans.push_back(v[i]*v[i]);
            i++;
        }
        else{
            ans.push_back(v[j]*v[j]);
            j--;
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++) cin>>v[i];

    vector<int>a(sort_square(v));
    reverse(a.begin(),a.end());

    for(auto ele :a) cout<<ele<<" ";

    
}