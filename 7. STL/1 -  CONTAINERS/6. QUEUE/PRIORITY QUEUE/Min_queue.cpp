#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int , vector<int> , greater<int>> mini;

    mini.push(2);
    mini.push(1);
    mini.push(5);
    mini.push(5);
    mini.push(9);
    mini.push(3);

    cout<<"TOP ELE --> "<<mini.top()<<endl;

    //TO PRINT ALL THE ELEMENTS
    
    int n=mini.size();
    for(int i=0 ; i<n ; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }


    return 0;
}