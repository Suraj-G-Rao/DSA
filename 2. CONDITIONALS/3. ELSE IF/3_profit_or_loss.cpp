//TO CHECK PROFIT OR LOSS AND TO SHOW THE DIFFERENCE AMOUNT

/*
SAMPLE INPUT:
Enter cost price: 100
Enter selling price: 120

SAMPLE OUTPUT:
Profit
Your profit is rupees 20
*/


#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit"<<endl;
        float profit=sp-cp;
        cout<<"Your profit is rupees "<<profit;
    }else if(cp>sp){
        cout<<"Loss"<<endl;
        float loss=cp-sp;
        cout<<"Your loss is rupees "<<loss;
    }else{
        cout<<"No profit or loss";
    }
    return 0;
}