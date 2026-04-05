// FIND THE TOTAL NUM OF TRIPLETS SUCH THAT  THE SUM OF 3 NUMBERS IS 'X'

// SAMPLE INPUT  -->  1 2 3 4 0 5   X=5
// SAMPLE OUTPUT -->  2 [(1,4,0) , (2,3,0)]

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     int n,i,j,k,count=0,x;
//     cin>>n;

//     vector <int> v(n);
//     for(i=0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<"Enter The value of 'x' --> ";
//     cin>>x;

//     for(i=0 ; i<n ;i++){
//         for(j=i+1 ; j<n ;j++){
//             for(k=j+1 ;k<n ;k++){
//                 if((v[i]+v[j]+v[k])==x){
//                     count++;
//                 }
//             }
//         }
//     }

//     cout<<"Total Triplets --> "<<count;


//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        //moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                //skip the duplicates:
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}