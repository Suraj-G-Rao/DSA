#include<iostream>
#include<array>
using namespace std;

array <int,3> a; // IT CONTAINS 0
int main(){

    array <int,3> b; // IT CONTAINS GARBAGE VALUE

    for(int i=0,j=0 ; i<a.size(),j<b.size() ; i++,j++){
        cout<<"a --> "<<a[i]<<"    " <<"b-->"<<" "<<b[j]<<endl;
    }

    cout<<endl;

    array <int,5> c = {1};  //IT CONTAINS --> 1 0 0 0 0

    //IF WE WANT TO STORE ALL THE ELE WITH 1
    c.fill(1);  //IT WILL STORE --> 1 1 1 1 1

    for(int i=0;i<c.size();i++){
        cout<<c.at(i)<<" ";
    }


    return 0;
}