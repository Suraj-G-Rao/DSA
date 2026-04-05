#include<iostream>
#include<math.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    int ans=0,i=0;
    while(n != 0 ) {
        double p= pow(10,i); // --> we should always initialize pow fun wid double only or else we get pow(10,2)--> 99.999999 ~ 99 in int if we use double we get 100
        int bit  = n & 1;
        ans = (bit * p ) + ans;
        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}
// #include<iostream>
// using namespace std;


// int main() {

//     int n;
//     cin >> n;


//     int ans  = 0;
//     int i = 0,p=1;
//     while(n != 0 ) {

//         int bit  = n & 1;

//         ans = (bit * p ) + ans;

//         n = n >> 1;
//         p=p*10;
//         i++;

//     }

//     cout<<" Answer is " << ans << endl;
//     return 0;
// }