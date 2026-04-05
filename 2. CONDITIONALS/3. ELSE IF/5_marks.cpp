//TO PRINT THE GRADE ACCORDING TO MARKS

/*
SAMPLE INPUT:
Enter the marks: 87

SAMPLE OUTPUT --> B
*/

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"A";
    }else if(marks>=80){
        cout<<"B";
    }else if(marks>=70){
        cout<<"C";
    }else if(marks>=60){
        cout<<"D";
    }else if(marks>=50){
        cout<<"E";
    }else{
        cout<<"F";
}
return 0;
}