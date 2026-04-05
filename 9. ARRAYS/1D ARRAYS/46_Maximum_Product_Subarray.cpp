/*
Problem Link  : https://bit.ly/3VPdyyq

SAMPLE INPUT  : [-2,-3,4,-1,-2,1,5,-3]
SAMPLE OUTPUT : 360 {-3,4,-1,-2,1,5,-3}

*/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
/*

--> IF ALL ELE ARE POSITIVE  --  ANS IS MULTIPLICATION OF ALL THE ELEMENTS
--> IF NO. ELE ARE NEGETIVE IS EVEN  --  ANS IS MULTIPLICATION OF ALL THE ELEMENTS
--> IF NO. ELE ARE NEGETIVE IS ODD  
    EITHER WE SHOULD MUL ALL THE ELE IN THE LEFT OR RIGHT OF ALL THE NEGETIVE ELEMENT 
    AND FIND MAXIMUM AMONG THEM
*/
int Maximum_Product_Sub_Array(vector<int> &v ){
    int suffix=1, prefix=1 , maxi=INT_MIN;
    for(int i=0;i<v.size() ;i++){
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix*=v[i];
        suffix*=v[v.size()-i-1];
        maxi=max(maxi,max(prefix,suffix));
    }
    return maxi;
}
// int Maximum_Product_Sub_Array(vector<int> &v ){
//     int mul=1 , maxi=INT_MIN ;
//     for(int i=0 ; i<v.size();i++){
//        mul=1;
//        for(int j=i;j<v.size() ;j++){
//           mul*=v[j];
//           maxi=max(maxi,mul);
//        }
//     }
//     return maxi;
// }
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<"Maximum Product --> "<<Maximum_Product_Sub_Array(v)<<endl;

    return 0;
}