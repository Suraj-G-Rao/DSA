/*

PROBLEM STATEMENT : https://bit.ly/3srTkOv

SAMPLE INPUT  : (a+b)
SAMPLE OUTPUT : Valid String

SAMPLE INPUT  : (a)
SAMPLE OUTPUT : InValid String

SAMPLE INPUT  : ((a+b))
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
bool reduntant_brackets(string st){

    stack<char> s;

    for (int i = 0; i < st.size(); i++)
    {
        char ch = st[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*'|| ch == '/' ){
            s.push(ch);
        }
        else if(ch == ')'){
            if(s.top() == '(') return false;
            else{
                while(s.top() != '(') s.pop();
                s.pop();
            }
        }
    }
    return false;

}
int main () {

    string string;
    cout<<"Enter The String : ";
    cin>>string;

    if(reduntant_brackets(string)) cout<<"String is Valid"<<endl;
    else                          cout<<"String is Invalid"<<endl;






    return 0;
}