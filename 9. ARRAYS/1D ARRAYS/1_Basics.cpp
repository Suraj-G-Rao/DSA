#include<iostream>
using namespace std;
// MAX SIZE INSIDE THE INT MAIN IS 10^7
int array[10];
int main(){


    // MAX SIZE INSIDE THE INT MAIN IS 10^6
    //int array[1000000];


    // ARRAY INITIALIZATION
    // int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int a[5]={24};

    int size=sizeof(a)/sizeof(a[0]);


    // for(int i=0; i<size; i++){
    //     cout<<a[i]<<" ";
    // }
    // for(int ele : a){
    //     cout<<ele<<endl;
    // }

    int a1[4]={};  //{} THIS STORES 0 IN ALL THE INDEX

    for(int ele : a1){
        cout<<ele<<endl;
    }

    // GARBAGE VALUES GETS PRINTED IF WE DON'T INITIALIZE

    // cout<<a1[0]<<endl;
    // cout<<a1[1]<<endl;
    // cout<<a1[2]<<endl;
    // cout<<a1[3]<<endl;




    return 0;
}