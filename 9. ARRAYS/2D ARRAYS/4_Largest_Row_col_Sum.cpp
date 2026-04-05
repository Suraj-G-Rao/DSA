/*
COL WISE SUM 
SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]  

SAMPLE OUTPUT : Largest Row Sum --> 24
                Largest col sum --> 18
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print_vec(vector<vector<int>> &v){
    for(auto i :v){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
pair<int,int> Largest_row_Wise_Sum(vector<vector<int>> &v){
    int maxi=INT_MIN, row=0;
    for(int i= 0 ; i<v.size();i++){
        int sum=0;
        for(int j=0 ; j<v[0].size();j++){
            sum+=v[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            row=i+1;
        }
    }
    return {maxi,row};
}
pair<int,int> Largest_col_Wise_Sum(vector<vector<int>> &v){
    int maxi=INT_MIN,col=0;
    for(int i= 0 ; i<v[0].size();i++){
        int sum=0;
        for(int j=0 ; j<v.size();j++){
            sum+=v[j][i];
        }
        if(sum>maxi){
            maxi=sum;
            col=i+1;
        }
    }
    return {maxi,col};
}
int main(){
    int n,m;
    cout<<"Enter The size Of rows and columns : ";
    cin>>n>>m;

    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++){
        for(int j=0 ; j<m ;j++){
            cin>>v[i][j];
        }
    }
    auto r = Largest_row_Wise_Sum(v);
    auto c = Largest_col_Wise_Sum(v);

    cout<<"LARGEST ROW WISE SUM --> "<<r.first<<endl;
    cout<<"LARGEST ROW SUM AT  --> "<<r.second<<" ROW "<<endl;

    cout<<endl;

    cout<<"LARGEST COL WISE SUM --> "<<c.first<<endl;
    cout<<"LARGEST COL SUM AT --> "<<c.second<<" COLUMN"<<endl;


    return 0;
}