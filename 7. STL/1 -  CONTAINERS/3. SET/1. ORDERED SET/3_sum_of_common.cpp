/*
ADDING THE COMMON ELEMENTS OF TWO VECTOR

SAMPLE INPUT  : V1 = [1,1,2,3,3,3]  
                V2 = [5,6,7,5,2,3,6]
SAMPLE OUTPUT : 5 (SINCE 2 & 3 are common therefore 2+3 = 5)

*/
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int sum_of_common(set<int> big_set,set<int> small_set){
    int ans=0;
    for(auto i : small_set){
        if(big_set.count(i)){
            ans+=i;
        }
    }
    return ans;
}
int main(){

    int n,m;

    cout<<"Enter the size of 1st vector --> ";
    cin>>n;
    cout<<"Enter the size of 2nd vector --> ";
    cin>>m;

    vector<int>v1(n);
    vector<int>v2(m);

    set<int> s1;
    set<int> s2;
    cout<<"Enter the elements of 1st vector --> ";
    for(int i=0;  i<n ; i++){
        cin>>v1[i];
        s1.insert(v1[i]);
    }
    
    cout<<"Enter the elements of 1st vector --> ";
    for(int j=0;  j<m ; j++){
        cin>>v2[j];
        s2.insert(v2[j]);
    }

    int sum ;
    if(s1.size()>s2.size()){
        sum=sum_of_common(s1,s2);
    }
    else{
        sum=sum_of_common(s2,s1);
    }

    cout<<"Sum Of Common Elements is --> "<<sum;




    return 0;
}
