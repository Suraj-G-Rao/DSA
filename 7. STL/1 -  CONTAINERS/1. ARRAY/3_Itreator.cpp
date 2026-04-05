/*

ARRAY a = { 1 , 2 , 3 , 4 , 5 }
ADDRESS = {100,104,108,112,116}

a.begin()  --> IT RETURNS THE ADDRESS OF 1st ELEMENT        --> 100
a.end()    --> IT RETURNS THE ADDRESS OF NEXT OF LAST ELE   --> 120
a.rbegin() --> IT RETURNS THE ADDRESS OF LAST ELEMENT       --> 116
a.rend()   --> IT RETURNS THE ADDRESS OF BEFORE THE 1ST ELE --> 96



*/
#include<iostream>
#include<array>
using namespace std;

int main(){

    int i;
    array <int,5> a={1,2,3,4};

    for(auto i = a.begin() ; i<a.end() ; i++){
        cout<<*i<<" ";
    }

    cout<<endl;
    
    // TO PRINT IN REVERSE ORDER
    for(auto i = a.rbegin() ; i!=a.rend() ; i++){
        cout<<*i<<" ";
    }

    cout<<endl;

    //FOR EACH LOOP
    for(auto i : a){
        cout<<i<<" ";
    }


    return 0;
}

