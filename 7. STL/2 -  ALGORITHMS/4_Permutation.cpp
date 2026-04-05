#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v={6,2,5};

    // PRINT ALL THE COMBINATION OF THE VECTOR IN ASCENDING ORDER
    sort(v.begin(),v.end());

    do{
        for(int i=0 ; i<v.size() ; i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    while(next_permutation(v.begin(),v.end()));

    cout<<endl<<endl;

    // PRINT ALL THE COMBINATION OF THE VECTOR IN DECENDING ORDER

    reverse(v.begin(),v.end());

    do{
        for(int i=0 ; i<v.size() ; i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    while(prev_permutation(v.begin(),v.end()));




    return 0;
}