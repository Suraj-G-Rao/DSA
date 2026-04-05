// DRAW THE FOLLWING PATTER WITHOUT USING EXTRA VARIABLE
// 1
// 23
// 345
// 4567

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=i;j<=2*i-1;j++){
//             cout<<j;
//         }
//         cout<<'\n';
//     }
//     return 0;
// } 
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,a=1;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         a=i;
//         for(j=1;j<=i;j++){
//             cout<<a;
//             a++;
//         }
//         cout<<'\n';
//     }
//     return 0;
// }

//DRAW THIS PATTERN WITHOUT USING EXTRA VARIABLE
// 1
// 21
// 321
// 4321
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<'\n';
    }
    return 0;
}