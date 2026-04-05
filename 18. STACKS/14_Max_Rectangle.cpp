/*

PROBLEM STATEMENT : https://www.geeksforgeeks.org/problems/max-rectangle/1

SAMPLE INPUT  :  0 1 1 0
                 1 1 1 1
                 1 1 1 1
                 1 1 0 0
SAMPLE OUTPUT :  8

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
vector<int> next_small_element(vector<int>& v){

    vector<int> ans(v.size());
    stack<int> s;

    s.push(-1);

    for(int i=v.size()-1 ; i>=0 ;  i--){
        while(s.top()!=-1 && v[i]<=v[s.top()]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
    
}
vector<int> prev_small_element(vector<int>& v){

    vector<int> ans(v.size());
    stack<int> s;

    s.push(-1);

    for(int i=0 ; i<v.size() ;  i++){
        while(s.top()!=-1 && v[i]<=v[s.top()]){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
    
}
int find_area(vector<int>& v){

    vector<int> next(v.size()); 
    next = next_small_element(v);

    vector<int> prev(v.size());
    prev = prev_small_element(v);

    int area = INT_MIN;

    for(int i=0 ; i<v.size() ;i++){
        int l = v[i];

        if(next[i]==-1) next[i] = v.size();

        int b = next[i]-prev[i]-1;

        area = max(area,l*b);
    }

    return area;
}
int Max_Rectangle_Area(vector<vector<int>>& v){
    
    // int n = v[0].size();

    int area = find_area(v[0]);

    for(int i =1 ; i<v.size() ; i++){
        for(int j=0 ; j<v[0].size() ; j++){
            if(v[i][j] != 0)    v[i][j] = v[i][j]+v[i-1][j];
            else                v[i][j] = 0;        
        }
        area = max(area,find_area(v[i]));
    }
    return area;
}
int main () {

    int n;
    cout<<"Enter The row size : ";
    cin>>n;
    int m;
    cout<<"Enter The col size : ";
    cin>>m;

    vector<vector<int>> v(n,vector<int>(m));

    cout<<"Enter The Elements : ";

    for(int i=0 ;i<n ;i++){
        for(int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }

    cout<<"Max Rectangle Area : "<<Max_Rectangle_Area(v)<<endl;





    return 0;
}