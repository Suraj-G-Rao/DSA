#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool string_anagram(string s1,string s2){
    if(s1.size()!=s2.size())  return false;

    vector<int> freq(26,0);
    for(auto it :s1){
        freq[it-'a']++;
    }
    for(auto it :s2){
        freq[it-'a']--;
    }
    if(count(freq.begin(),freq.end(),0)!=freq.size())  return false;

    return true;
}
int main(){
    cout<<"Enter string 1 names : ";
    string s1;
    getline(cin,s1);
    cout<<"Enter string 2 names : ";
    string s2;
    getline(cin,s2);

    
    if(string_anagram(s1,s2)){
        cout<<"YES Two strings are Anagram . "<<endl;
    }
    else{
        cout<<"NO Two strings are not Anagram . "<<endl;
    }

    return 0;

}

