/*

OPERATIONS :

l.push_front()
l.push_back()
l.pop_front()
l.pop_back()
l.front()
l.back()
l.size()
l.begin() , l.end() , l.rbegin() , l.rend()
l.empty()
l.clear()
l.at()
l.remove() --> O(1)

*/
#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque <int> d={1,2,3,4,5};

    cout<<"Front --> "<<d.front()<<endl;
    cout<<"Back  --> "<<d.back()<<endl;
    cout<<"Size  --> "<<d.size()<<endl;
    cout<<"Empty --> "<<d.empty()<<endl;

    d.push_front(0);
    d.push_back(6);

    cout<<"After Pushing : "<<endl;

    for(int ele : d){
        cout<<ele<<" ";
    }

    d.pop_back();
    d.pop_front();

    cout<<endl<<"After Poping : "<<endl;

    for(int ele : d){
        cout<<ele<<" ";
    }

    d.erase(d.begin(),d.end()-1);
    
    cout<<endl<<"After Eraseing : "<<endl;
    for(int ele : d){
        cout<<ele<<" ";
    }


    return 0;
}