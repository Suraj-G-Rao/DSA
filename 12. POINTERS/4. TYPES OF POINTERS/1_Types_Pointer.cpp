/*

--> A WILD POINTER IS A TYPE OF A POINTER WHERE
    THE USER DECLARES THE POINTER BUT NOT INITIALISE

--> NULL POINTER IS A POINTER WHICH IS INITALISED WITH NULL

--> DANGLING POINTER IS A POINTER THAT POINTS TO A MEMORY LOCATION THAT IS NOT VALID .

--> VOID POINTER IS A TYPE OF POINTER THAT CAN POINT TO ANY DATATYPE VALUE .
    VOID POINTERS CANNOT BE DEREFERENCED DIRECTLY

*/

#include<iostream>
using namespace std;
int main(){

    // WILD POINTER

    int *ptr;                
    cout<<ptr<<" "<<*ptr<<endl;

    // NULL POINTER

    int *ptr1 = NULL;        
    int *p1 = 0;
    cout<<ptr1<<" "<<p1<<endl;

    // DANGLING POINTER

    int *p2 =NULL;           
    {
        int x = 10;
        p2 = &x;
    }
    cout<<p2<<endl;

    // VOID POINTER

    float f = 10.2;
    int x = 10;
    void *p3 = &f;
    p3 = &x;

    // cout<<*p3<<endl; // VOID POINTERS CANNOT BE DEREFERENCED DIRECTLY
    cout<<(int*)p3<<" "<<*(int*)p3<<endl;



    return 0;
}