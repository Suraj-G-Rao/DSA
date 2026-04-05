/*

COMMON PREFIX 

SAMPLE INPUT  : ["FLOWER" , "FLIGHT" , "FLASK"]
SAMPLE OUTPUT :  "FL"

*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string Common_Prefix(vector<string> &v){
    string s=v[0];
    int ans_len=s.size();
    for(int i=0 ; i<v.size() ;i++){
        int j=0;
        while(j<s.size() && j<v[i].size() && v[i][j]==s[j]) j++;

        ans_len = min(ans_len,j);
    }
    return s.substr(0,ans_len);
}
// string Common_Prefix(vector<string> &v){
//     sort(v.begin(),v.end());
//     string s="";
//     for(int i=0 ; i<v[0].length() ;i++){
//         if(v[0][i]==v[v.size()-1][i]){
//             s.push_back(v[0][i]);
//         }
//         else 
//             break;
//     }
//     return s;
// }
int main(){
    int n;
    cout<<"Enter the no of strings : ";
    cin>>n;

    vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<Common_Prefix(v)<<endl;



    return 0;

}

