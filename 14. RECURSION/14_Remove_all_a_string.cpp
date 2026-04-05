/*

REMOVE ALL 'A' IN A STRING 

SAMPLE INPUT  : S="ABCDAC"
SAMPLE OUTPUT : S="BCDC"

*/
#include<iostream>
#include<string>
using namespace std;
string Remove_a(string s , int i,int l){

    if(i==l) return "";
    string current ="";
    current += s[i];

    return ((s[i]=='a')? "" : current) +Remove_a(s,i+1,l);
}
int main(){

    string s ;
    cout<<"Enter The String : ";
    getline(cin,s);

    cout<<"Before String : "<<s<<endl;

    Remove_a(s,0,s.length());
    cout<<"After String : "<<Remove_a(s,0,s.length())<<endl;




    return 0;
}