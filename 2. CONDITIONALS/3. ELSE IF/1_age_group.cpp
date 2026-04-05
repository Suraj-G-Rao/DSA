//TO CHECK IF A PERSON IS CHILD, TEENAGER OR ADULT

/*
SAMPLE INPUT:
Enter age: 19

SAMPLE OUTPUT --> Adult
*/

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if(age<12){
        cout<<"Child";
    }else if(age<=18){
        cout<<"Teenager";
    }else{
        cout<<"Adult";
    }
    return 0;
}