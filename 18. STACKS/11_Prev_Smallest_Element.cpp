/*

PROBLEM STATEMENT : 

SAMPLE INPUT  :  2 1 4 3 
SAMPLE OUTPUT :  -1 -1 1 1  

*/
#include<iostream>
#include<vector>
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
vector<int> Prev_smallest_Element(vector<int> & v){

    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for(int i=0 ;i<v.size(); i++){

        while(s.top()>=v[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(v[i]);
    }
    
    return ans;

}
int main () {

    int n;
    cout<<"Enter The Number Of elements : ";
    cin>>n;

    vector<int> s;

    cout<<"Enter The Elements : ";

    for(int i=0 ;i<n ;i++){
        int ele;
        cin>> ele;
        s.push_back(ele);
    }

    vector<int> a(Prev_smallest_Element(s));

    for(auto i: a){
        cout<<i<<" ";
    }





    return 0;
}