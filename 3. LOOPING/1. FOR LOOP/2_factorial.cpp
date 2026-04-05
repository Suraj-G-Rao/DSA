// 1. PRINTING THE FACTORIAL OF THE GIVEN NO.
#include<iostream>
using namespace std;
int main(){
    int n,factorial=1;
    cin>>n;

    for (int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<factorial<<endl;

    return 0;
}

// 2. CHECKING THE GIVEN NUM IS A FACTORIAL NO. OR NOT

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,f=1;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         f=f*i;
//         if(f==n){
//             cout<<"factorial no.";
//             break;
//         }
//         else if(f>n){
//             cout<<"Not a factorial no";
//             break;
//         }
//     }

//     return 0;
// }