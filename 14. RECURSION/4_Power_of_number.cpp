#include<iostream>
#include<math.h>
using namespace std;
unsigned long long power(int a,int b){
    if(b==0) return 1;

    unsigned long long res=power(a,b/2);
    if(b&1){
        return res*res*a;
    }
    else{
        return res*res;
    }

}
int main(){

    int a,b;
    cout<<"Enter The value of base : ";
    cin>>a;
    cout<<"Enter The value of power : ";
    cin>>b;

    cout<<power(a,b);


    return 0;
}
// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;

//     return a*power(a,b-1);
// }
// int main(){

//     int a,b;
//     cout<<"Enter The value of base : ";
//     cin>>a;
//     cout<<"Enter The value of power : ";
//     cin>>b;

//     cout<<power(a,b);


//     return 0;
// }