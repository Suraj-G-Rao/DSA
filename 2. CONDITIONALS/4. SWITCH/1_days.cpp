//TO CHECK THE DAY OF A WEEK

/*
SAMPLE INPUT:
Day number: 6

SAMPLE OUTPUT --> Saturday
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Day number: ";
    cin>>n;
    switch(n){
        case 1:cout<<"Monday";
        break;
        case 2:cout<<"Tuesday";
        break;
        case 3:cout<<"Wednesday";
        break;
        case 4:cout<<"Thursday";
        break;
        case 5:cout<<"Friday";
        break;
        case 6:cout<<"Saturday";
        break;
        case 7:cout<<"Sunday";
        break;
        default:cout<<"Invalid day";
        break;
    }
    return 0;
}