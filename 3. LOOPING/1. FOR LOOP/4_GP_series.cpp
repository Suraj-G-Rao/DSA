//WAP TO PRINT THE SERIES  -->  100 50 25.....
#include<iostream>
using namespace std;
int main(){
    float a=100,n;
    cin>>n;
    for(float i=1;i<=n;i++){
        cout<<a<<" ";
        a=a/2;

    }


    return 0;
}