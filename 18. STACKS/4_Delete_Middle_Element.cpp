/*

PROBLEM STATEMENT : https://bit.ly/3ovTIu2

SAMPLE INPUT  : 1 2 3 4 5
SAMPLE OUTPUT : 1 2 4 5

*/
#include<iostream>
#include<stack>
using namespace std;

void delete_mid(stack<int>& s,int count ,int n){

    if(count == n/2){
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    delete_mid(s,count+1,n);

    s.push(num);

}

void delete_middle_ele(stack<int>&s,int size){
    int count=0;
    delete_mid(s,count,size);
}
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

    delete_middle_ele(s,n);

    print(s);



    return 0;
}