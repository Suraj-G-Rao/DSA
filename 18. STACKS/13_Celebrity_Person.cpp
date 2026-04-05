/*

PROBLEM STATEMENT : https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

SAMPLE INPUT  :  0 1 0
                 0 0 0
                 0 1 0
SAMPLE OUTPUT :  1

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
bool knows(vector<vector<int>> v , int a , int b){
    if(v[a][b]) return true;
    return false;
}
int Celebrity_Person(vector<vector<int>>& v){
    
    int n = v[0].size();

    stack<int> s;
    for(int i=0 ; i<n ; i++){
        s.push(i);
    }

    while(s.size()>1){
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if(knows(v,a,b)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }

    int celeb = s.top();

    bool row = false;
    int zero_count =0 ;

    for(int i=0 ;i<n ; i++){
        if(v[celeb][i]==0) zero_count++;
    }

    if(zero_count == n) row = true;

    bool col = false;
    int one_count =0 ;

    for(int i=0 ;i<n ; i++){
        if(v[i][celeb]==1) one_count++;
    }

    if(one_count == n-1) col = true;

    if(row == true && col == true){
        return celeb;
    }
    return -1;

}
int main () {

    int n;
    cout<<"Enter The Number Of elements : ";
    cin>>n;

    vector<vector<int>> v(n,vector<int>(n));

    cout<<"Enter The Elements : ";

    for(int i=0 ;i<n ;i++){
        for(int j=0 ; j<n ; j++){
            cin>>v[i][j];
        }
    }

    cout<<"Celebrity Person : "<<Celebrity_Person(v)<<endl;





    return 0;
}