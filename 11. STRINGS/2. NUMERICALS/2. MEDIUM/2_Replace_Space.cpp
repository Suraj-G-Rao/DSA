/*
PROBLEM LINK  :  https://bit.ly/3sfP71Q 

SAMPLE INPUT  :  Hello World
SAMPLE OUTPUT :  Hello@40World


*/
#include <iostream>
using namespace std;

void replaceSpaces(string& s) {
    int spaceCount = 0;
    for (char c : s) {
        if (c == ' ') spaceCount++;
    }
    int newLength = s.length() + spaceCount * 2; // Each space replaced by "@40" adds 2 extra characters
    s.resize(newLength);
    
    int index = newLength - 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            s[index--] = '0';
            s[index--] = '4';
            s[index--] = '@';
        } else {
            s[index--] = s[i];
        }
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    replaceSpaces(s);
    
    cout << "Modified string: " << s << endl;
    
    return 0;
}
