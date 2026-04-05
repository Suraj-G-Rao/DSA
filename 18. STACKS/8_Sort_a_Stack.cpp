/*

PROBLEM STATEMENT : https://bit.ly/3snpr1B

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
void sorted_insert(stack<int>& s,int num){

    if(s.empty() || s.top()<=num){
        s.push(num);
        return;
    }
    int top = s.top();

    s.pop();

    sorted_insert(s,num);

    s.push(top);

}
void sort_stack(stack<int>& s){

    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();


    sort_stack(s);

    sorted_insert(s,num);

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

    sort_stack(s);

    cout<<"Stack Elements : ";
    print(s);
    cout<<endl;




    return 0;
}