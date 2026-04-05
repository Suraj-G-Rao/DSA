/*

Problem Link: https://bit.ly/3WOGkjH

SAMPLE INPUT  : [1,2,3]
SAMPLE OUTPUT : [1,3,2]

SAMPLE INPUT  : [3,2,1]
SAMPLE OUTPUT : [1,2,3]

SAMPLE INPUT  : [2,1,5,4,3,0,0]
SAMPLE OUTPUT : [2,3,0,0,1,4,5]
*/
// WITHOUT USING STL

#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
vector<int> Next_Permutation(vector<int> &v ){
    int ind = -1;
    for(int i=v.size()-1 ; i>=0 ;i--){
        if(v[i]>v[i-1])  ind=i-1;
    }
    if(ind==-1){
        for(int i=0 , j=v.size()-1; i<v.size() ,j>i ;i++,j--){
            swap(v[i],v[j]);
        }
        return v;
    }
    for(int i=v.size()-1 ; i>=0 ;i--){
        if(v[i]>v[ind]){
            swap(v[i],v[ind]);
            break;
        }
    }
    for(int i=ind+1 , j=v.size()-1; i<v.size() ,j>i ;i++,j--){
        swap(v[i],v[j]);
    }

    return v;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> a(Next_Permutation(v));

    print_vec(a);

    return 0;
}

// USING STL 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void print_vec(vector<int> &v){
//     for(auto i :v) cout<<i<<" ";
// }
// int No_of_sub_array(vector<int> &v ){
//     int num =0;
    


//     return num;
// }
// int main(){
//     int n;
//     cout<<"Enter The Number Of Elements : ";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter The Elements : ";
//     for(int i=0;i<n;i++) cin>>v[i];

//     next_permutation(v.begin(),v.end());

//     print_vec(v);

//     return 0;
// }