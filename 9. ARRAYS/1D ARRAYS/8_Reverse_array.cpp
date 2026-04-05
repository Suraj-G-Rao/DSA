// FIRST APPROACH WITH USING EXTRA VARIABLE

// #include<iostream>
// using namespace std;
// int main(){
//     int a[100],n,b[100];
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0,j=n-1; i<n,j>=0; i++,j--){
//         b[i]=a[j];
//     }

//     for(int i=0 ; i<n; i++){
//         cout<<b[i]<<" ";
//     }

//     return 0;
// }


// SECOND APPROACH WITHOUT USING EXTRA VARIABLE
// #include<iostream>
// using namespace std;
// int main(){
//     int a[100],n,temp;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0,j=n-1; i<n,j>i; i++,j--){
//         swap(a[i],a[j]);
//         // if(j>=i){
//         //     swap(a[i],a[j]);
//         //     // temp=a[i];
//         //     // a[i]=a[j];
//         //     // a[j]=temp;
//         // }
        
//     }

//     for(int i=0 ; i<n; i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }
// SECOND APPROACH WITHOUT USING EXTRA VARIABLE
#include<iostream>
using namespace std;
int main(){
    int a[100],n,temp;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n/2; i++){
        swap(a[i],a[n-i-1]);
        // if(j>=i){
        //     swap(a[i],a[j]);
        //     // temp=a[i];
        //     // a[i]=a[j];
        //     // a[j]=temp;
        // }
        
    }

    for(int i=0 ; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}