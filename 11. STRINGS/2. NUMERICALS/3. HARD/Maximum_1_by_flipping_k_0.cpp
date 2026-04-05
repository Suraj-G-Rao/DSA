/*

SAMPLE INPUT  :  s = '0001101011'  k=2
SAMPLE OUTPUT :  7   (0001111111)

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int Maximum_1_by_flipping_k_0(string s , int k){
    int maxi=0;
    int start=0;
    int end=0;
    int count_zeroes=0;

    for(end=0 ; end<s.length() ; end++){
        if(s[end]=='0') count_zeroes++;
        while(count_zeroes > k){
            if(s[start]=='0')  count_zeroes--;
            start++;
        }

        maxi=max(maxi,end-start+1);
    }
    return maxi;
}
int main(){
    string s;
    int k;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"Enter the value of 'k' : ";
    cin>>k;

    cout<<Maximum_1_by_flipping_k_0(s,k)<<endl;
    cout<<s<<endl;



    return 0;

}