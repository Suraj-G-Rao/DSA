/*

PROBLEM : https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1


SAMPLE INPUT  : [1,2,2,4] k=2
SAMPLE OUTPUT : 2

*/


// BEST APPROACH
#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int kthSmallest(vector<int> &arr, int k) {
        // code here
        int a = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            a = max(a, arr[i]);
        }

        vector<int> freq(a + 1, 0);

        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        int cnt = 0;
        for (int i = 0; i <= a; i++)
        {
            if (freq[i] != 0)
            {
                cnt += freq[i];
                if (cnt >= k)
                {
                    return i;
                }
            }
        }

        return -1;
}
int main(){
    int n,k;
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter K value : ";
    cin>>k;

    cout<<"Kth Smallest Element is : "<<kthSmallest(a,k);

    return 0;
}

