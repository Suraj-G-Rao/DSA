/*
CASE 1 :

PASCAL TRIANGLE : 1
                  1 1
                  1 2 1
                  1 3 3 1
                  1 4 6 4 1
                  1 5 10 10 5 1

                
SAMPLE INPUT  : 5TH ROW 3RD COL

SAMPLE OUTPUT : 6  SHOULD PRINT 5TH ROW 3RD ELE

Time Complexity : O(c), where c = given column number.
EXPLANATION     : We are running a loop for r times, where r is c-1.
Space Complexity: O(1) as we are not using any extra space.

*/
// #include<iostream>
// using namespace std;
// int Pascal_row_col_value(int row , int col){
//     long long ans=1;
//     for(int i = 1 ; i<=col-1 ; i++){
//         ans = ans*(row-i)/(i);
//     }


//     return ans;
// }
// int main(){
//     int n,r;
//     cout<<"Enter The rows and column number : ";
//     cin>>n>>r;

//     cout<<Pascal_row_col_value(n,r);

//     return 0;
// }
/*
CASE 2 

PASCAL TRIANGLE :
                1
                1 1
                1 2 1
                1 3 3 1
                1 4 6 4 1

SAMPLE INPUT  : 5

SAMPLE OUTPUT : 1 4 6 4 1  SHOULD PRINT 5TH ROW 

Time Complexity  : O(N) where N = given row number. Here we are using only a single loop.

Space Complexity : O(1) as we not using any extra space.

*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void Pascal_Row(int n){
//     long long ans =1;
//     cout<<ans<<" ";

//     for(int i=1 ; i<=n-1 ; i++){
//         ans = ans*(n-i)/i;
//         cout<<ans<<" ";
//     }
    
// }
// int main(){
//     int n;
//     cout<<"Enter The Row Number : ";
//     cin>>n;

//     Pascal_Row(n);


//     return 0;
// }
/*
CASE 3 

PROBLEM LINK  : https://bit.ly/3jY4iuF

SAMPLE INPUT  : 5

SAMPLE OUTPUT : 1
                1 1
                1 2 1
                1 3 3 1
                1 4 6 4 1

Time Complexity  : O(N2), where n = number of rows(given).
Space Complexity : In this case, we are only using space to store the answer. That is why space complexity can still be considered as O(1).

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
vector<int> Pascal_Row(int n){
    vector<int> pascal_row;
    int ans=1;
    pascal_row.emplace_back(ans);
    for(int i = 1 ; i<n ;i++){
        ans = ans*(n-i)/i;
        pascal_row.emplace_back(ans);
    }
    return pascal_row;
}
vector<vector<int>> Pascal_Triangle(int n){
    vector<vector<int>>ans;

    for(int i=1 ; i<=n ; i++){
        ans.emplace_back(Pascal_Row(i));
    }

    return ans;
}
vector<vector<int>> pascal_triangle(int n){
    vector<vector<int>> ans(n);

    for(int i=0 ; i<n ;i++){
        ans[i].resize(i+1);
        for(int j=0; j<=i ;j++){
            if(j==0 || j==i) ans[i][j]=1;
            else
               ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter The rows  : ";
    cin>>n;

    // vector<vector<int>>a(Pascal_Triangle(n));
    vector<vector<int>>a(pascal_triangle(n));
    print_vec(a);

    return 0;
}