/*
PROBLEM LINK  :  https://bit.ly/3sfP71Q 

SAMPLE INPUT  :  Hello World
SAMPLE OUTPUT :  Hello@40World


*/
#include <iostream>
#include <algorithm>
using namespace std;
string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    int i = 0;
    int n = s.size();
    int left = 0;
    int right = 0;
    while (i < n)
    {
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        if (i == n)
        {
            break;
        }
        while (i < n && s[i] != ' ')
        {
            s[right++] = s[i++];
        }
        reverse(s.begin() + left, s.begin() + right);
        s[right++] = ' ';
        left = right;
        i++;
    }
    s.resize(right - 1);
    return s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    
    cout << "Modified string: " << reverseWords(s) << endl;
    
    return 0;
}
