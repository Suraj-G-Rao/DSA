/*

MOORE'S VOTING ALGORITHM

MAJORITY ELE -->  https://bit.ly/3vIsCTH

SAMPLE INPUT  : [1,1,1,2,2,2]  SIZE->6
SAMPLE OUTPUT : [1,2] ( MAJORITY ELE  > N/3 )     6/3 -> 2 SINCE 1 and 2 ARE REPEATED 3 TIMES

*/
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
vector<int> N_3_Majority_element(vector<int> &v ){
    int count1=0 , count2=0,num1=INT_MIN,num2=INT_MIN,c1=0,c2=0;
    vector<int> ans;
    for(auto ele :v){
      if (count1 == 0 && num2 != ele) {
          count1 = 1;
          num1 = ele;
      } 
      else if (count2 == 0 && num1 != ele) {
          count2 = 1;
          num2 = ele;
      } 
      else if (num1 == ele)
          count1++;
      else if (num2 == ele)
        count2++;
      else {
        count1--;
        count2--;
        }
    }

    for(auto it : v){
        if(num1==it) c1++;
        if(num2==it) c2++;
    }

    int mini = (int)(v.size()/3)+1;
   
    
    if(c1>=mini)   ans.emplace_back(num1);
    if(c2>=mini)   ans.emplace_back(num2);

    sort(ans.begin(),ans.end());
 
    return ans;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> a(N_3_Majority_element(v));
    

    if(a.size() == 0)  cout<<"NO Majority Element";
    else{
        
        cout<<"Major elements --> ";
        for(auto it : a)   cout<<it<<" ";
    }




    return 0;
}