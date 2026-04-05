#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;
int main(){

    vector<int> v = {1,2,4,2,5,9};
    // array<int,6> v = {1,2,4,2,5,9};

    sort(v.begin(),v.end());

    for(auto ele : v) cout<<ele<<" ";
    cout<<endl;

    // SEARCH FIRST OCC OF 2 IS PRESENT IF PRESNT PRINT THE INDEX
    
    int x=2;
    int index=lower_bound(v.begin(),v.end(),x)-v.begin();

    if(index<v.size() && v[index]==x){
        cout<<"ELEMENT FOUND AT INDEX --> "<<index<<endl;
    }
    else{
        cout<<"ELEMENT NOT FOUND "<<index;
    }

    // SEARCH LAST OCC OF 2 IS PRESENT IF PRESNT PRINT THE INDEX
    
    int y=2;
    int ind=upper_bound(v.begin(),v.end(),x)-v.begin()-1;

    if(ind>=0 && v[ind]==y){
        cout<<"ELEMENT FOUND AT INDEX --> "<<ind<<endl;
    }
    else{
        cout<<"ELEMENT NOT FOUND "<<ind;
    }

    // COUNT THE NO. OF TIMES Z APPEARS

    int z=10;
    auto up=upper_bound(v.begin(),v.end(),z);
    auto lw=lower_bound(v.begin(),v.end(),z);

    cout<<"Z APPEARS --> "<<up-lw;





    return 0 ;
}