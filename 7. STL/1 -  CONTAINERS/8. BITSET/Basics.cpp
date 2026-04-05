/*int --> 16 bits
char--> 8 bits

bitset --> 1 bit
WE USE BITSET WHEN WE ARE HAVING ONLY 1'S AND 0'S INSTEAD OF ARRAYS SINCE IT TAKES LARGE SPACE

DECLARATION :

bitset <size> variable;

OPERATIONS :

NOTE : ALL OPERATIONS START FROM REVERSE ORDER 

bt.all()   --> RETURNS TRUE IF ALL ARE 1 ELSE FALSE 
bt.none()  --> RETURNS TRUE IF ALL ARE 0 ELSE FALSE
bt.any()   --> RETURNS TRUE IF ANY OF THE BIT IS 1 ELSE FALSE
bt.count() --> RETURNS THE COUNT OF SET(1) BITS

bt.flip()  --> IT FLIPS ALL THE BITS             11001 --> 00110
bt.flip(1) --> IT FLIPS 1ST BIT FROM LAST         11001 --> 11011

bt.set()   --> IT MAKES ALL THE BITS AS 1 
bt.set(2)  --> IT MAKES THE 2ND BIT FROM LAST AS 1  
bt.set(2,0)--> IT MAKES THE 2ND BIT FROM LAST AS 0 

bt.reset()   --> IT MAKES ALL THE BITS AS 0 
bt.reset(2)  --> IT MAKES THE 2ND BIT FROM LAST AS 0 
bt.reset(2,1)--> IT MAKES THE 2ND BIT FROM LAST AS 1

bt.size()    --> RETURNS THE SIZE OF THE BITSET
bt.test(i)   --> CHECKS THE ith BIT FROM LAST IS 1 OR NOT   


*/

#include<iostream>
#include<bitset>
using namespace std;
int main(){

    bitset<100> bt;
    cin>>bt; //--> IF INPUT < SIZE REMAINING BITS ARE FILLED WITH 0

    cout<<bt.all()<<endl;


    return 0;
}

