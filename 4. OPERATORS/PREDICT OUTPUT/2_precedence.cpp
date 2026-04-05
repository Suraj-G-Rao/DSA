// #include<iostream>
// using namespace std;
// int main(){
//     cout<<(4+2+"pqr");
//     cout<<("pqr"+4+2);
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int p=1,q=1,r=1,s;
    s= p-++r-++q;       // p - (++r) - (++q)
    cout<<s;
    return 0;
}
    //OUTPUT --> -3