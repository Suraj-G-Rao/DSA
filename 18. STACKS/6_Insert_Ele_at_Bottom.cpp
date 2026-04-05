/*

PROBLEM STATEMENT : https://bit.ly/34qqmGL

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
void insert_at_bottom(stack<int>& s,int d){

    if(s.empty()){
        s.push(d);
        return;
    }
    int num = s.top();
    s.pop();
    insert_at_bottom(s,d);

    s.push(num);

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

    int d;
    cout<<"Enter The Element to be inserted : ";
    cin>>d;

    insert_at_bottom(s,d);

    cout<<"Stack Elements : ";
    print(s);
    cout<<endl;






    return 0;
}