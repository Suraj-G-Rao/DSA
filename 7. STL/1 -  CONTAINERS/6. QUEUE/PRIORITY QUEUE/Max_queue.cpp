/*
--> OPERATIONS ARE PERFORMED WITH O(log(N))
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int> maxi;

    maxi.push(2);
    maxi.push(1);
    maxi.push(5);
    maxi.push(5);
    maxi.push(9);
    maxi.push(3);

    cout<<"TOP ELE --> "<<maxi.top()<<endl;

    //TO PRINT ALL THE ELEMENTS
    
    int n=maxi.size();
    for(int i=0 ; i<n ; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }


    return 0;
}