#include<iostream>
#include<string>
#include<vector>
using namespace std;
string sort_in_ascending(string s){
    vector<int> a(26,0);
    for(int i=0 ; i<s.length() ; i++){
        int index = s[i]-'a';
        a[index]++;
    }
    int j=0;
    for(int i=0 ; i<26 ; i++){
        while(a[i]--){
            s[j++]=i+'a';
        }
    }
    return s;
}
int main(){
    string s = "abdba";
    cout<<sort_in_ascending(s)<<endl;
    return 0;
}