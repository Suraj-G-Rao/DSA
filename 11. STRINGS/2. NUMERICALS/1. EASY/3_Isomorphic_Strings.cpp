#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool Isomorphic_Strings(string s1,string s2){
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);
    if(s1.length()!=s2.length())  return false;
    for(int i=0 ; i<s1.length() ; i++){
        if(v1[s1[i]]!=v2[s2[i]]){
            return false;
        }
        v1[s1[i]]=v2[s2[i]]=i;
        // v1[s1[i]]++;
        // v2[s2[i]]++;
    }
    return true;
}
int main(){
    cout<<"Enter string 1 names : ";
    string s1;
    getline(cin,s1);
    cout<<"Enter string 2 names : ";
    string s2;
    getline(cin,s2);

    if(Isomorphic_Strings(s1,s2)){
        cout<<"YES Two strings are Isomorphic . "<<endl;
    }
    else{
        cout<<"NO Two strings are not Isomorphic . "<<endl;
    }

    return 0;

}

