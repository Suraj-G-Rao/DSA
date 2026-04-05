/*

PROBLEM LINK  : https://bit.ly/3jLQGSS 

SAMPLE INPUT  : a=[3,4,6]  b=[2,3,8] 
SAMPLE OUTPUT : a=[2,3,3]  b=[4,6,8]

SAMPLE INPUT  : a=[3,4,6]  b=[2] 
SAMPLE OUTPUT : a=[2,3,4]  b=[6]

SAMPLE INPUT  : a=[4]      b=[2,6,9] 
SAMPLE OUTPUT : a=[2]      b=[4,6,9]

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge_Without_extra_space(vector<int> &v1, vector<int> &v2)
{
    int i=v1.size()-1, j=0;
    while(v1[i]>v2[j]){
        swap(v1[i],v2[j]);
        i--;
        j++;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

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
    for (int i = 0; i < m; i++)   cin >> v2[i];

    merge_Without_extra_space(v1, v2);

    cout<<"Vector 1 After Merging --> ";
    for(int i=0 ; i<v1.size() ; i++) cout<<v1[i]<<" ";

    cout<<endl<<"Vector 2 After Merging --> ";
    for(int i=0 ; i<v2.size() ; i++) cout<<v2[i]<<" ";


    return 0;
}