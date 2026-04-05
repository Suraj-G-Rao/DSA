#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4};

    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;

    int size =sizeof(array)/sizeof(array[0]);

    //for loop
    for(int index=0; index<size ; index++){
        cout<<array[index]<<endl;
    }

    //for each loop

    // SYNTAX for(data_type_of_the_ele  element_name : array name )
    for(int ele: array){  
       cout<<ele<<endl;
    }
    
     //while loop
    int index =0;
    while(index<size){
         cout<<array[index++]<<endl;
    }


    return 0;
}