/*
SAMPLE INPUT  : a=[1,4,6]  b=[0,2,7]
SAMPLE OUTPUT : [0,1,2,4,6,7]
*/

// FIRST APPROACH WITH USING EXTRA SPACE
// #include<iostream>
// #include<vector>
// using namespace std;
// void print_vec(vector<int> &v){
//     for(auto i :v) cout<<i<<" ";
// }
// vector<int> Merge_2_sorted_vec(vector<int> &v1 , vector<int> &v2){
//     int i=0,j=0;
//     vector<int> ans;
//     while(i<v1.size() && j<v2.size()){
//         if(v1[i]<v2[j]){
//             ans.emplace_back(v1[i]);
//             i++;
//         }
//         else{
//             ans.emplace_back(v2[j]);
//             j++;
//         }
//     }
//     while(i<v1.size()){
//         ans.push_back(v1[i++]);
//     }
//     while(j<v2.size()){
//         ans.push_back(v2[j++]);
//     }
//     return ans;
// }
// int main(){
//     int n,m;
//     cout<<"Enter The Number Of Elements of 1st array : ";
//     cin>>n;
//     vector<int>v1(n);
//     cout<<"Enter The Elements : ";
//     for(int i=0;i<n;i++) cin>>v1[i];

//     cout<<"Enter The Number Of Elements of 2nd array : ";
//     cin>>m;
//     vector<int>v2(m);
//     cout<<"Enter The Elements : ";
//     for(int i=0;i<m;i++) cin>>v2[i];

//     vector<int> v(Merge_2_sorted_vec(v1,v2));

//     print_vec(v);

//     return 0;
// }

// SECOND APPROACH WITHOUT USING EXTRA VARIABLE

/*
SAMPLE INPUT  : a=[3,4,6] M=3  b=[2] N=1
SAMPLE OUTPUT : [2,3,4,6]

SAMPLE INPUT  : a=[4] M=1  b=[2,6,9] N=3
SAMPLE OUTPUT : [2,4,6,9]
*/

#include <iostream>
#include <vector>
using namespace std;
void merge_Without_extra_space(vector<int> &v1, int m, vector<int> &v2, int n)
{
    int i = m - 1, j = n - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (v1[i] > v2[j])
        {
            v1[k] = v1[i];
            i--;
        }
        else
        {
            v1[k] = v2[j];
            j--;
        }
        k--;
    }
    while (j >= 0)
    {
        v1[k--] = v2[j--];
    }
    for(int i=0;i<m+n;i++) cout<<v1[i]<<" ";

}
int main()
{
    int n, m;
    cout << "Enter The Number Of Elements of 1st array : ";
    cin >> n;
    vector<int> v1(n);
    cout << "Enter The Elements : ";
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    cout << "Enter The Number Of Elements of 2nd array : ";
    cin >> m;
    vector<int> v2(m);
    cout << "Enter The Elements : ";
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    merge_Without_extra_space(v1,v1.size(), v2,v2.size());


    return 0;
}