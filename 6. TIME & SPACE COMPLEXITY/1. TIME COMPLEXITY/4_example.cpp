// #include<iostream>
// using namespace std;
// int main(){
//     int a = 0, b = 0, n, m;
//     cin>>n>>m;
//     for(int i=0; i<n; i++){
//         a = a + rand();    (ASSUME THAT rand() IS O(1) TIME)
//     }
//     for(int j=0; j<m; j++){   //SINCE WE HAVE TWO SEPARATE FOR LOOPS, TIME COMPLEXITY WILL BE O(n+m)
//         b = b + rand();
//     }          
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=0, b=0, n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             a = a+j;
//         }
//     }
//     for(int k=0; k<n; k++){   //TIME COMPLEXITY --> O(n^2)
//         b = b+k;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 0, n;
//     cin>>n;
//     for(int i = 0; i<n; i*=2){
//         for(int j=n; j>i; j--){   //TIME COMPLEXITY --> O(N*log(N))
//             a++;
//         }
//     }
//     cout<<a;
// }

#include<iostream>
using namespace std;
int main(){
    int a = 0, n;
    cin>>n;
    for(int i = n; i>0; i/=2){
        for(int j=0; j<i; j++){   //TIME COMPLEXITY --> O(N*log(N))
            a++;
        }
    }
    cout<<a;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 0, n;
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         for(int j=n; j>i; j--){   //TIME COMPLEXITY --> O(n^2)
//             a = a+i+j;
//         }
//     }
//     cout<<a;
// }