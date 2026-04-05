#include <iostream>
#include <string>
using namespace std;

int check(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9') ) return 1;
    return 0;
}
char to_upper(char ch){
    if((ch>='0' && ch<='9')||(ch>='A'&& ch<='Z'))  return ch;
    return ch-'a'+'A';
}
bool checkPalindrome(string s)
{
    int i=0,j=s.size()-1;
    while(i<=j){
        while(i <= j &&!check(s[i])) i++;
        while(i <= j &&!check(s[j])) j--;
        if(i <= j &&to_upper(s[i])!=to_upper(s[j])) return false;
        else{
            i++;
            j--;
        }
    }
    return true;

}

int main() {

    string s1 = "6";
    string s2 = "c1 O$d@eeD o1c";
    string s3 = "A man, a plan, a canal: Panama";

    cout << checkPalindrome(s1) << " ";
    cout << checkPalindrome(s2) << " ";
    cout << checkPalindrome(s3) << endl;

    return 0;
}
