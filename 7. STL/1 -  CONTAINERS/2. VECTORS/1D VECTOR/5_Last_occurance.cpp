// FIND THE LAST OCCURENCE OF X 

// SAMPLE INPUT  -->  1 2 3 2 1 4 1   X=1
// SAMPLE OUTPUT -->  6

#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n,i,x;
    cin>>n;
    vector<int> v(n);

    for(int i=0 ;i<n ;i++){
        cin>>v[i];
    }
    // for(int i=0 ;i<n ;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }

    cin>>x;

    for(i=v.size()-1 ; i>=0 ; i--){
        if(v.at(i)==x){
            cout<<"The Last occurence of x is at index "<<i;
            break;
        }
    }


    return 0;
}

