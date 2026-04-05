// #include<iostream>
// using namespace std;
// int main(){
//     int value = 0,n;            
//     for(int i=1; i<=n; i*=2){   //TIME COMPLEXITY --> O(logn)
//         value++;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int val=0,n;
//     for(int i=1; i<=n; i+=i){  //TIME COMPLEXITY --> O(logn)
//         val++;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int val=0, n;
    cin>>n;
    for(int i=1; i<=n; i*=2){
        for(int j=1; j<=i; j++){   //TIME COMPLEXITY --> O(n)
            val++;
        }
    }
    cout<<val;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int val=0,n;
//     for(int i=2; i<=n; i*=i){   //TIME COMPLEXITY --> O(log(logn))
//         val++;
//     }

// }