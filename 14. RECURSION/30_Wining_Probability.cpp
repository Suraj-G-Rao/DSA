/*

SAMPLE INPUT  : 3
SAMPLE OUTPUT : aa , aba, abb , bb , bab , baa

SAMPLE INPUT  : 5
SAMPLE OUTPUT : aaa aaba aabba aabbb abaa ababa ababb abbaa abbab abbb baaa baaba baabb babaa babab babb bbaaa bbaab bbab bbb

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void winning_matches(int i , int n , string s , vector<string> &result){
    if(max(count(s.begin(), s.end(), 'a'),count(s.begin(), s.end(), 'b'))== (n/2)+1 || i==n){
        result.push_back(s);
        return;
    }
    winning_matches(i+1,n,s+'a',result);  
    winning_matches(i+1,n,s+'b',result);

}
int main(){
    int n;
    cout<<"Enter The No. Of Matches : ";
    cin>>n;
    vector<string> result;
    winning_matches(0,n,"",result);

    cout<<"length of result : "<<result.size()<<endl;


    for(auto i : result) cout<<i<<" ";


    return 0;
}