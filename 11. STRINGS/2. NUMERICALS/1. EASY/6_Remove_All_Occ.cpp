/*
PROBLEM LINK  : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

SAMPLE INPUT  : s = "daabcbaabcbc", part = "abc"
SAMPLE OUTPUT : "dab"


*/
#include <iostream>
#include <string>
using namespace std;

void Remove_All_Occ(string &s , string &part)
{
    int len=s.length();
    while(len>0 && s.find(part)<len){
        s.erase(s.find(part),part.length());
    }
}
int main() {

    string s,part;
    cout<<"Enter The String : "<<endl;
    cin>>s;
    cout<<"Enter the part : "<<endl;
    cin>>part;
    Remove_All_Occ(s,part);

    cout<<"STRING 's' : "<<s<<endl;



    return 0;
}
