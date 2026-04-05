#include<iostream>
using namespace std;
void australia();
void england();

void india(){
    cout<<"You are in india"<<endl;
    australia();
    cout<<"finally reached India"<<endl;
    return;
}
void australia(){
    cout<<"You are in Australia"<<endl;
    england();
    return;
} 
void england(){
    cout<<"You are in england"<<endl;
    return;
}
int main(){
    india();
    return 0;
}