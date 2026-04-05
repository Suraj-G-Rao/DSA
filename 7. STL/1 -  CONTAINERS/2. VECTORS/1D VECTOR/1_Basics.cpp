/*

VECTOR SIZE BASICALLY GETS DOUBLED WHEN THE ELEMENT INCREASES

WHEN WE CLEAR THE VECTOR SIZE DECREASES BUT CAPACITY REMAINS SAME

v.resize(10) --> IT  DOUBLES THE CAPACITY AND RESIZE ACCORDING TO THE GIVEN SIZE

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){


    // INTIALIZING VECTOR
    vector <int> v;
    vector <int> a(5,1);  //--> IT CREATES A ARRAY OF SIZE 5 WITH ALL ELE AS 1 

    cout<<"Is Vector Empty 1(True) 0(False) --> "<<v.empty()<<endl;

    

    for(int i:a){
        cout<<i<<" ";
    }

    cout<<"Capacity --> "<<v.capacity()<<"   "<<"Size --> "<<v.size()<<endl;

    v.push_back(1);
    cout<<"Capacity --> "<<v.capacity()<<"   "<<"Size --> "<<v.size()<<endl;

    v.push_back(2);
    cout<<"Capacity --> "<<v.capacity()<<"   "<<"Size --> "<<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity --> "<<v.capacity()<<"   "<<"Size --> "<<v.size()<<endl;

    v.push_back(4);
    cout<<"Capacity --> "<<v.capacity()<<"   "<<"Size --> "<<v.size()<<endl;

    v.push_back(5);
    cout<<"Capacity --> "<<v.capacity()<<"   "<<"Size --> "<<v.size()<<endl;

    v.resize(9);

    cout<<"After Resizeing :"<<endl;

    cout<<"Capacity --> "<<v.capacity()<<"   "<<"Size --> "<<v.size()<<endl;

    

    vector <int> v2={1,2,3,4,5,6};

    cout<<"Capacity v2 --> "<<v2.capacity()<<"    "<<"Size v2 -->"<<v2.size()<<endl;
    
    cout<<"After Resizeing :"<<endl;

    v2.resize(10); // IT RESIZE THE VECTOR TO DEFINED SIZE AND DOUBLES THE CAPACITY

    cout<<"Capacity v2--> "<<v2.capacity()<<"    "<<"Size v2 -->"<<v2.size()<<endl;

    // v2.clear();  //--> IT CLEARS ALL THE ELE OF THE VECTOR 

    cout<<"Capacity v2 --> "<<v2.capacity()<<"    "<<"Size v2 -->"<<v2.size()<<endl;


    // DELETING THE ELEMENTS OF THE VECTOR
    
    // 1ST METHOD USING POS

    auto itr = v.begin();
    itr++;

    v.erase(itr);

    cout<<endl;

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    // 2ND METHOD USING RANGE OF POS

    auto start_itr=v.begin();
    auto end_itr=v.begin();

    advance(end_itr,2);

    v.erase(start_itr , end_itr);

    cout<<endl;

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;





    return 0;
}