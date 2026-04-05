/*

PROBLEM STATEMENT : https://bit.ly/34kxPaq

SAMPLE INPUT  : {}
SAMPLE OUTPUT : Valid String

SAMPLE INPUT  : {[}
SAMPLE OUTPUT : InValid String

*/
#include<iostream>
#include<stack>
using namespace std;

void print(stack<char> s){

    if(s.empty()){
        return ;
    }
    
    char ch = s.top();
    s.pop();

    print(s);

    cout<<ch<<" ";
}
bool valid_parenthesis(string st){

    stack<char> s;

    for (int i = 0; i < st.size(); i++)
    {
        char ch = st[i];
        if(ch == '{' || ch == '(' || ch == '['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top = s.top();
                if((top == '{' && ch == '}') || (top == '(' && ch == ')') || (top == '[' && ch == ']')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else return false;
        }
    }
    if(s.empty()){
        return true;

    }
    else return false;

}
int main () {

    string string;
    cout<<"Enter The String : ";
    cin>>string;

    if(valid_parenthesis(string)) cout<<"String is Valid"<<endl;
    else                          cout<<"String is Invalid"<<endl;






    return 0;
}