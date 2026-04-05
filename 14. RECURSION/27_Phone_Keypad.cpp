/*

PROBLEM LINK  : https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

SAMPLE INPUT  : 23
SAMPLE OUTPUT : ad ae af bd be bf cd ce cf 

SAMPLE INPUT  : 79
SAMPLE OUTPUT : pw px py pz qw qx qy qz rw rx ry rz sw sx sy sz

SAMPLE INPUT  : 362
SAMPLE OUTPUT : dma dmb dmc dna dnb dnc doa dob doc ema emb emc ena enb enc eoa eob eoc fma fmb fmc fna fnb fnc foa fob foc

*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void Phone_Keypad(vector<string>& v,string &s , int i ,string result , vector<string> &r){

    if(i==s.size()){
        r.push_back(result);
        return;
    }

    int digit = s[i]-'0';

    if(digit<=1){
        Phone_Keypad(v,s,i+1,result,r);
        return;
    }

    for(int j=0 ; j<v[digit].size() ;j++){
        Phone_Keypad(v,s,i+1,result+v[digit][j],r);
    }
}
int main(){

    vector<string> v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string s ;
    cout<<"Enter Any phone digit 2-9 : ";
    cin>>s;

    vector<string> r;
    Phone_Keypad(v,s,0,"",r);

    for(auto i : r)  cout<<i<<" ";


    return 0;
}