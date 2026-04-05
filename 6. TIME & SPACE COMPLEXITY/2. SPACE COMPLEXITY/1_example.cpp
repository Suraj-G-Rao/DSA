// #include<iostream>
// using namespace std;
// int main(){
//     int a=0, b=0,n, m; //CONSTANT SPACE [O(1)]
//     for(int i=0; i<n; i++){  //SPACE COMPLEXITY --> O(1)
//         a = a + rand();
//     }
//     for(int j=0; j<m; j++){
//         b = b + rand();
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=0, b=0, n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             a = a+j;
//         }
//     }
//     for(int k=0; k<n; k++){    //SPACE COMPLEXITY --> O(1)
//         b = b+k;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){  
//     int a=0, n;                //NORMAL VARIABLE
//     for(int i=0; i<n; i++){
//         for(int j=n; j>i; j--){   //SPACE COMPLEXITY --> O(1)
//             a = a+i+j;
//         }
//     }
// }