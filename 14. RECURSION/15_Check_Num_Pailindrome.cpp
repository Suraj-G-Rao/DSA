/*

CHECK WHETHER GIVEN NUM IS A PALINDROME OR NOT 

SAMPLE INPUT  : N = 121
SAMPLE OUTPUT : YES

SAMPLE INPUT  : N = 12
SAMPLE OUTPUT : NO

*/
#include<iostream>
#include<string>
using namespace std;
bool Check_Palindrome(int n,int& temp){
    if(n>=0 && n<=9){
        bool res =(n == temp%10);
        temp=temp/10;
        return res;
    }
    
    bool res = Check_Palindrome(n/10 , temp)  && (n%10)==(temp%10) ;
    temp=temp/10;
    return res;
}
int main(){

    int n ,temp;
    cout<<"Enter The Number : ";
    cin>>n;
    temp = n;
    

    if(Check_Palindrome(n,temp))   cout<<"Yes"<<endl;
    else                      cout<<"No"<<endl;




    return 0;
}