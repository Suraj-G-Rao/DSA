/*

PROBLEM STATEMENT : https://leetcode.com/problems/largest-rectangle-in-histogram/description/

SAMPLE INPUT  :  2 1 5 6 2 3
SAMPLE OUTPUT :  10  

*/
#include<iostream>
#include<climits>
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
vector<int> next_smallest_ele(vector<int> & v){

    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for(int i=v.size()-1 ;i>=0; i--){

        while(s.top()!=-1 && v[s.top()]>=v[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    
    return ans;

}
vector<int> prev_smallest_ele(vector<int>& v){

    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for(int i=0 ; i<v.size() ; i++){
        while(s.top()!=-1 && v[s.top()]>=v[i]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int Largest_Area(vector<int>& v){
    vector<int> next(v.size());
    vector<int> prev(v.size());

    next = next_smallest_ele(v);
    prev = prev_smallest_ele(v);

    int area = INT_MIN;

    for(int i=0;i<v.size();i++){
        int l = v[i];

        if(next[i]==-1){
            next[i]= v.size();
        }

        int b = next[i]-prev[i]-1;

        area = max(area,l*b);
    }
    return area;
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

    cout<<"Largest Area : "<<Largest_Area(s)<<endl;





    return 0;
}