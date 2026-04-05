#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int p=pow(10,2); 
    // double p= pow(10,2); // --> we should always initialize pow fun wid double only or else we get pow(10,2)--> 99.999999 ~ 99 in int if we use double we get 100
    cout<<p<<endl;

    // cout<<pow(2,3)<<endl;
    // cout<<sqrt(24)<<endl;

    // int ans =sqrt(24);
    // cout<<ans<<endl;

    // double doubleans =sqrt(24);
    // cout<<doubleans<<endl;



    return 0;
}