/*

PROBLEM :  https://bit.ly/3Ioexjh


SAMPLE INPUT  : [1,2,2,2,3,3,3,3] k=2
SAMPLE OUTPUT : 1,3

*/

#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}
int main(){

    int n ;
    cout<<"Enter The Size Of The array : ";
    cin>>n;
    vector<int> v(n);

    cout<<"Enter The Array Elements in sorted order : ";
    for(int i=0 ; i<n ;i++) cin>>v[i];

    int key;
    cout<<"Enter The key element to be searched : ";
    cin>>key;

    pair<int, int> a(firstAndLastPosition(v,v.size(),key));

    cout<<"First Occ : "<<a.first<<endl;
    cout<<"Last Occ : "<<a.second<<endl;




    return 0;
}