/*

PROBLEM LINK  : https://leetcode.com/problems/move-zeroes/

SAMPLE INPUT  : [1,0,0,2,3,0,0,4,2,0]
SAMPLE OUTPUT : [1,2,3,4,2,0,0,0,0,0]

SAMPLE INPUT  : [1,2,3]
SAMPLE OUTPUT : [1,2,3]

SAMPLE INPUT  : [7 93 0 8 15 0 0 0 0 0 26 0 0 0 43 90 2 0 0 0 58 94 77 45 59 19 0 0 98 0 0 0 0 0 88 0 0 0 ]
SAMPLE output : [7 93 8 15 26 43 90 2 58 94 77 45 59 19 98 88 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ]

*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
void move_0s_right(vector<int> &v) {
    int nonZeroIndex = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] != 0) {
            swap(v[i], v[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}
//void moveZeroes(vector<int> &v)
// {
//     int count = 0;
//     int i, n = v.size();
//     for (i = 0; i < n - count; ++i)
//     {
//         if (i == n - count - 1)
//         {
//             break;
//         }

//         if (v[i] == 0)
//         {
//             v[i] = v[i + 1];
//             count += 1;
//             v.erase(v.begin() + i + 1);
//             --i;
//         }
//         print_vec(v);
//         cout<<endl;
//     }
//     for (int i = 0; i < count; i++)
//     {
//         v.push_back(0);
//     }
// }
void moveZeroes(vector<int> &v) // TIME COMPLEXITY - O(N2) SINCE ERASE SHIFTS THE ARRAY IT TAKES LONGER TIME
{
    int j=1;
    for (int i = v.size()- 1 ; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            v.erase(v.end() - j);
            v.emplace_back(0);
        }
        j++;
    }
}
void move_0s_left(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int non_zero_index = 0;
        while (v[non_zero_index] == 0) non_zero_index++;
        if (v[i] == 0)
        {
            swap(v[non_zero_index], v[i]);
            // non_zero_index++;
        }
    }
}

// void move_0s(vector<int> &v){
//     int i=0,j=0;
//     while(i<v.size()-1 && j<v.size()-1 && i<=j){
//         while(v[j]==0 && j<v.size()-1) j++;
//         while(v[i]!=0 && i<v.size()-1) i++;
//         if(v[i]==0 && v[j]!=0)  swap(v[j],v[i]);
//         int j=i+1;
//         print_vec(v);
//         cout<<endl;
//     }
// }
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    move_0s_right(v);
    // move_0s_left(v);
    // moveZeroes(v);
    // move_0s(v);
    print_vec(v);



    return 0;
}