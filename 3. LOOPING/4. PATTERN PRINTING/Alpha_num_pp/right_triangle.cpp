//DRAW THIS PATTERN n=5

// A
// BC
// CDE
// DEFG
// EFGHI

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n,a=65;
//     cin>>n;
//     for(i=65;i<=64+n;i++){
//         a=i;
//         for(j=65;j<=i;j++){
//             cout<<char(a);
//             a++;
//         }
//         cout<<'\n';
//     }
//     return 0;
// }


//DRAW THIS PATTERN
// A
// BC
// CDE
// DEFG
// EFGHI

#include<iostream>
using namespace std;
int main(){
    int i,j,n,a=65;
    cin>>n;
    for(i=64+n;i>=65;i--){
        a=i;
        for(j=64+n;j>=i;j--){
            cout<<char(a);
            a++;
        }
        cout<<'\n';
    }
    return 0;
}