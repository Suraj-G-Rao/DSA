#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int n) {

    //base case
    if(i>n) return true;

    if(str[i] != str[n-1])  return false;
    else                    return checkPalindrome(str, i+1,n-1);
    
}

int main() {

    string name = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length());

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }


    return 0;
}