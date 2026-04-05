#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter the values of n1 , n2, n3 :";
    cin>>n1>>n2>>n3;
    if(n1<0 ){
        n1=n1*(-1);
       
        
    }
    else if(n2<0){
         n2=n2*(-1);

    }
    else if(n3<0){
        n3=n3*(-1);

    }
    cout<<"the absolute value of n1 , n2, n3 --> "<<n1<<"  "<<n2<<"  "<<n3;








    return 0;
}