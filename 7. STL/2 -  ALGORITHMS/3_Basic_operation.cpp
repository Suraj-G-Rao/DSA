#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v={1,2,9,3,2};

    cout<<"Before Reversing : "<<endl;

    for(auto ele : v){
        cout<<ele <<" ";
    }cout<<endl;

    reverse(v.begin(),v.end());
    cout<<"After Reversing : "<<endl;

        for(auto ele : v){
        cout<<ele <<" ";
    }cout<<endl;

    cout<<"MAX --> "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"MIN --> "<<*min_element(v.begin(),v.end())<<endl;

    cout<<"Count(2) --> "<<count(v.begin(),v.end(),2)<<endl;

    auto it=find(v.begin(),v.end(),9);
    if(it== v.end()){
        cout<<"ELEMENT NOT FOUND"<<endl;
    }
    else{
        cout<<*it<<endl;

        cout<<"9 is found at index --> "<<(it-v.begin())<<endl;
    }

    //SEARCHING

    bool r = binary_search(v.begin(),v.end(),9);

    cout<<r<<endl;

    auto itr1 = lower_bound(v.begin(),v.end(),3);
    auto itr2 = upper_bound(v.begin(),v.end(),3);

    cout<<(itr1-v.begin())<<endl;
    cout<<(itr2-v.begin())<<endl;


    return 0;
}