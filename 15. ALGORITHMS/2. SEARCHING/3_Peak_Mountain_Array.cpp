/*

PROBLEM :  https://bit.ly/3Ioexjh


SAMPLE INPUT  : [0,10,5,2]
SAMPLE OUTPUT : 1

*/

#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return s;
}
int main(){

    int n ;
    cout<<"Enter The Size Of The array : ";
    cin>>n;
    vector<int> v(n);

    cout<<"Enter The Array Elements in sorted order : ";
    for(int i=0 ; i<n ;i++) cin>>v[i];



    cout<<"Peak Index : "<<peakIndexInMountainArray(v)<<endl;

    return 0;
}