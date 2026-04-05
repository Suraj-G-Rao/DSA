#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue <string> q;

    q.push("Suraj");
    q.push("G");
    q.push("Rao");

    cout<<"Front --> "<<q.front()<<endl;

    q.pop();

    
    cout<<"Front --> "<<q.front()<<endl;


    return 0;
}