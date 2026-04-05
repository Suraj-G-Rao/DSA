/*

PROBLEM LINK  : 

SAMPLE INPUT  : n=3

SAMPLE OUTPUT : [1,2,3
                 8,9,4
                 7,6,5]

SAMPLE INPUT  : n=4

SAMPLE OUTPUT : [1,2,3,4
               10,11,12,5
                 9,8,7,6]
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
vector<vector<int>> Create_Spiral_Matrix(int n){
    vector<vector<int>>ans(n,vector<int>(n));
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;
    int value=1;
    int dir=0;

    while(top<=bottom && left<=right){
    
    // LEFT --> RIGHT
    if(dir==0){
        for(int i=left ; i<=right ; i++){
            ans[top][i]=value++;
        }
        top++;
    }

    // TOP --> BOTTOM
    else if(dir==1){
        for(int i= top ; i<=bottom ;i++){
            ans[i][right]=value++;
        }
        right--;
    }

    // RIGHT --> LEFT 
    else if(dir==2){
        for(int i=right ; i>=left ;i--){
            ans[bottom][i]=value++;
        }
        bottom--;
    }

    // BOTTOM --> TOP
    else{
        for(int i=bottom ; i>=top ; i--){
            ans[i][left]=value++;
        }
        left++;
    }
    dir= (dir+1)%4;

    }



    return ans;
}
int main(){
    int n;
    cout<<"Enter The size Of the row : ";
    cin>>n;

    vector<vector<int>>a(Create_Spiral_Matrix(n));
    print_vec(a);

    return 0;
}