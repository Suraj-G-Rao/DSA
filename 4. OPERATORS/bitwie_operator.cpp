#include<iostream>
using namespace std;
int main(){
    int a=3 ,b=2;
    // cout<<"a&b "<<(a&b)<<endl;       // a=11 b=10  011 & 010 == 010 --> 2
    // cout<<"a|b "<<(a|b)<<endl;       // a=11 b=10  011 | 010 == 011 --> 3
    // cout<<"a^b "<<(a^b)<<endl;       // a=11 b=10  011 ^ 010 == 001 --> 1

    // XOR OPERATOR
    // IF WE XOR SAME ELE WE GET 0
    // ANY ELE 'a' XOR 0 WE GET 'a' ITSELF
    cout<<(a^a)<<" "<<(a^0)<<endl;
    cout<<(5^6)<<endl;

    //cout<<"~a "<<(~a)<<endl;        // OUTPUT WILL BE ALWAYS -(num+1) for +ve value of num
    // a=0000....11   ~a=11111.....00 
    // 1's               00000.....11
    // 2's                         +1
    //                             100 --> -4  
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Bitwise complement : "<<~4<<endl;
//     cout<<"Bitwise complement : "<<~6<<endl;
//     cout<<"Left shift: "<<(5<<1)<<endl;
//     cout<<"Rigth shift: "<<(5>>1)<<endl;
//     cout<<"Bitwise OR: "<<(5|1)<<endl;
//     cout<<"Bitwise AND: "<<(3 & 8)<<endl;
//     cout<<"Bitwise exclusive OR: "<<(8^8)<<endl;
//     return 0;
// }