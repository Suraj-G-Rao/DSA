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
#include<list>
using namespace std;
int main(){

    list <int> l={1,2,3,4,5};
    
    cout<<"Front --> "<<l.front()<<endl;
    cout<<"Back  --> "<<l.back()<<endl;
    cout<<"Size  --> "<<l.size()<<endl;
    cout<<"Empty --> "<<l.empty()<<endl;

    l.push_front(0);
    l.push_back(6);

    cout<<"After Pushing : "<<endl;

    for(int ele : l){
        cout<<ele<<" ";
    }

    l.pop_back();
    l.pop_front();

    cout<<endl<<"After Poping : "<<endl;

    for(int ele : l){
        cout<<ele<<" ";
    }

    // l.erase(l.begin(),l.end());
    l.remove(4); // --> O(1)
    
    cout<<endl<<"After Eraseing : "<<endl;
    for(int ele : l){
        cout<<ele<<" ";
    }


    return 0;
}