//TO CHECK IF A PERSON IS SENIOR CITIZEN OR NOT

/*
SAMPLE INPUT 1:
Enter the age:50

SAMPLE OUTPUT 1 --> The person is not a senior citizen

SAMPLE INPUT 2:
Enter the age:64

SAMPLE OUTPUT 2 --> The person is a senior citizen
*/


#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age:";
    cin>>age;
    if(age>=60){
        cout<<"The person is a senior citizen"<<endl;
    }else{
        cout<<"The person is not a senior citizen"<<endl;
    }
    return 0;
}