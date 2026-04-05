#include<iostream>
using namespace std;
void reverse_array(string &arr ,int i, int n){ // ALWAYS PASS STRING AS REFERENCE
    if(i>n) return;

    swap(arr[i],arr[n-1]);
    reverse_array(arr,i+1,n-1);
}
int main(){

    string s;
    cout<<"Enter The String : ";
    getline(cin,s);

    cout<<"String Before Reversing : "<<s<<endl;
    reverse_array(s,0,s.length());
    cout<<"String After Reversing : "<<s;



    return 0;
}
