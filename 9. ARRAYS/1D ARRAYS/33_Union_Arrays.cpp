/*
SAMPLE INPUT  : [1,2,3,4] [2,4,6,8]
SAMPLE OUTPUT : [1,2,3,4,6,8]
*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
vector < int > FindUnion(vector<int> v1, vector<int> v2, int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (v1[i] <= v2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != v1[i])
        Union.push_back(v1[i]);
      i++;
    } 
    else{
      if (Union.size() == 0 || Union.back() != v2[j])
        Union.push_back(v2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in v1
  {
    if (Union.back() != v1[i])
      Union.push_back(v1[i]);
    i++;
  }
  while (j < m) // If any elements left in v2
  {
    if (Union.back() != v2[j])
      Union.push_back(v2[j]);
    j++;
  }
  return Union;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements in 1st Array : ";
    cin>>n;
    vector<int>v1(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v1[i];

    int m;
    cout<<"Enter The Number Of Elements in 2nd Array : ";
    cin>>m;
    vector<int>v2(m);
    cout<<"Enter The Elements : ";
    for(int i=0;i<m;i++) cin>>v2[i];

    vector<int> a(FindUnion(v1,v2,v1.size(),v2.size()));

    print_vec(a);



    return 0;
}