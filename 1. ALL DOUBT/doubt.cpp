/*
given n numbers, print the one with maximum number of occurences using contaniers
inp size=5
{1,3,3,3,2}
output= 3 (3 occurs maximum number of times)
*/

#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    int x;
    int max=0;
    cout<<"enter value of n:\n";
    cin>>n;
    map<int,int>mp;
    
    for(int i=0;i<n;i++){
        
        cout<<"enter the values:\n";
        cin>>x;
        mp[x]++;
        if(mp[x]>mp[max]){
            max=x;

        }
        
    }
    cout<<"maximum occuring is: "<<x<<endl;
     
   
    return 0;

}
//not getting expected output