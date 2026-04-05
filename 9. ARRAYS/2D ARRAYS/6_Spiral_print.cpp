/*
Spiral Print: https://leetcode.com/problems/spiral-matrix/description/

SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]

SAMPLE OUTPUT : [1 2 3 6 9 8 7 4 5]
*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<vector<int>> &v){
    for(auto i :v){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
vector<int> spiralOrder(vector<vector<int> >& matrix) {

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;

    // index initialisation
    int top = 0;
    int left = 0;
    int bottom = row - 1;
    int right = col - 1;

    while (count < total)
    {
        // print starting row
        for (int index = left; count < total && index <= right; index++){
            ans.push_back(matrix[top][index]);
            count++;
        }
        top++;

        // print ending column
        for (int index = top; count < total && index <= bottom; index++){
            ans.push_back(matrix[index][right]);
            count++;
        }
        right--;

        // print ending row
        for (int index = right; count < total && index >= left; index--){
            ans.push_back(matrix[bottom][index]);
            count++;
        }
        bottom--;

        // print starting column
        for (int index = bottom; count < total && index >= top; index--){
            ans.push_back(matrix[index][left]);
            count++;
        }
        left++;
    }
    return ans;
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
    vector<int> a(spiralOrder(v));
    for(auto i : a)  cout<<i<<" ";

    return 0;
}