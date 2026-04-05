#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    n%2==0 ? cout<<"Even Number \n" : cout<<"Odd Number\n" ;

    n>99 && n<1000 ? cout<<"Three Digit Number " : cout<<"Not a Three Digit Number " ;

    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int a=4,b=5,max;
//     float c=3.14;

//     a>b? max=a:max=b;    //Ternary operator
//     cout<<max<<endl;

//     bool flag;
//     a==10? flag=true : flag=false;    //Ternary operator
//     cout<<"Output is: "<<flag<<endl;

//     cout<<int(c)<<endl;   //Casting operator

//     cout<<"Address of a is: "<<(&a)<<endl;   //Address of operator
//     cout<<"Address of b is: "<<(&b)<<endl;

//     return 0;
// }