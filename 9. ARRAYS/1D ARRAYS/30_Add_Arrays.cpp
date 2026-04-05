/*

ADD 2 ARRAYS  --> https://bit.ly/3DXfsDZ 

SAMPLE INPUT  : [9,9,9] [9,9,9]
SAMPLE OUTPUT : [1,9,9,8]

SAMPLE INPUT  : [1,2,3] [9,9]
SAMPLE OUTPUT : [2,2,2]
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
    cout<<" "<<endl;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int c=0,q=0;
	vector<int> ans;
	int i=n-1,j=m-1;
	while(i>=0 && j>=0){
		c=a[i]+b[j]+q;
		ans.emplace_back(c%10);
        print_vec(ans);
		q=c/10;
		i--;
		j--;
	}
	while(i>=0){
		c=a[i]+q;
		ans.emplace_back(c%10);
		q=c/10;
		i--;
	}
	while(j>=0){
		c=b[j]+q;
		ans.emplace_back(c%10);
		q=c/10;
		j--;
	}
    if(q)  ans.emplace_back(q);
	reverse(ans.begin(),ans.end());
	return ans;
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

    vector<int>a(findArraySum(v1,v1.size(),v2,v2.size()));

    print_vec(a);




    return 0;
}