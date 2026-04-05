/*

PROBLEM STATEMENT :

SAMPLE INPUT  :
SAMPLE OUTPUT :

*/
#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s){

    if(s.empty()){
        return ;
    }
    
    int num = s.top();
    s.pop();

    print(s);

    cout<<num<<" ";
}
int main () {

    int n;
    cout<<"Enter The Number Of elements : ";
    cin>>n;

    stack<int> s;

    cout<<"Enter The Elements : ";

    for(int i=0 ;i<n ;i++){
        int ele;
        cin>> ele;
        s.push(ele);
    }

    cout<<"Stack Elements : ";
    print(s);
    cout<<endl;




    return 0;
}