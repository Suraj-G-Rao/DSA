/*

MOORE'S VOTING ALGORITHM

MAJORITY ELE -->  https://bit.ly/3GmPYTH

SAMPLE INPUT  : [7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5]  SIZE->16
SAMPLE OUTPUT : ( MAJORITY ELE  > N/2 )     16/2 -> 5 SINCE 5 IS REPEATED 9 TIMES

*/
#include<iostream>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
int N_2_Majority_element(vector<int> &v ){
    int count=0,num,c=0;
    for(auto ele : v){
        if(count==0) num=ele;
        if(ele == num) count++;
        else count--;
    }
    if(count!=0){
        for(int i=0;i<v.size();i++){
            if(v[i]==num) c++;
        }
        if(c>(v.size()/2)) return num;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    int maj = N_2_Majority_element(v);

    if(maj ==-1)  cout<<"NO Majority Element";
    else          cout<<maj<<" is the Mjority Element ";





    return 0;
}