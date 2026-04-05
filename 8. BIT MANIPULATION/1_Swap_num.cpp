#include<iostream>
using namespace std;
void Swap(int &a, int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
int main(){

    int m,n;
    cout<<"Enter The Value Of 2 Numbers : ";
    cin>>n>>m;

    swap(n,m);

    cout<<"The Value of n = "<<n<<endl;
    cout<<"The Value of m = "<<m<<endl;



    return 0;
}