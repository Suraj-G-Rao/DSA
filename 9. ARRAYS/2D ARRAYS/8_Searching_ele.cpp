/*

PROBLEM LINK  : https://leetcode.com/problems/search-a-2d-matrix-ii/description/ 

SAMPLE INPUT  : [1,2,3
                 4,5,6   TARGET = 9
                 7,8,9]

SAMPLE OUTPUT : YES
*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void print_vec(vector<vector<int>> &v){
//     for(auto i :v){
//         for(auto j : i){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// bool searchMatrix(vector<vector<int>> &matrix, int target)
// {

//     int row = matrix.size();
//     int col = matrix[0].size();

//     int rowIndex = 0;
//     int colIndex = col - 1;

//     while (rowIndex < row && colIndex >= 0)
//     {
//         int element = matrix[rowIndex][colIndex];

//         if (element == target)
//         {
//             return 1;
//         }

//         if (element < target)
//         {
//             rowIndex++;
//         }
//         else
//         {
//             colIndex--;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n,m;
//     cout<<"Enter The size Of rows and columns : ";
//     cin>>n>>m;

//     vector<vector<int>>v(n,vector<int>(m));
//     cout<<"Enter The Elements : ";
//     for(int i=0;i<n;i++){
//         for(int j=0 ; j<m ;j++){
//             cin>>v[i][j];
//         }
//     }
//     int target;
//     cout<<"Enter The Element to be searched : ";
//     cin>>target;

//     if(searchMatrix(v,target)) cout<<"Yes";
//     else cout<<"No";

//     return 0;
// }
/*

PROBLEM LINK  : https://leetcode.com/problems/search-a-2d-matrix/description/ 

SAMPLE INPUT  : [1,2,3
                 4,5,6   TARGET = 9
                 7,8,9]

SAMPLE OUTPUT : YES
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
bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;

    int mid =  (end + start) / 2;

    while (start <= end)
    {

        int element = matrix[mid / col][mid % col];

        if (element == target)
        {
            return 1;
        }

        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
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
    int target;
    cout<<"Enter The Element to be searched : ";
    cin>>target;

    if(searchMatrix(v,target)) cout<<"Yes";
    else cout<<"No";

    return 0;
}