#include<iostream>
using namespace std;
int main(){

    int a[10];
    int sum=0;

    for(int &ele : a){
        cin>>ele;
        sum+=ele;
    }

    int max=a[0];
    for(int ele :a){
        if(ele>max){
            max=ele;
        }
    }

    cout<<"The Sum Of elements is "<<sum<<endl;
    cout<<"The max element in the array is "<<max;


    return 0;
}