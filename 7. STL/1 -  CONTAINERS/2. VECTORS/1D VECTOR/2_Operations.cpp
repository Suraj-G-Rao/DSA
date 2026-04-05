/*

VECTOR OPERATIONS :

VECTOR v = { 1 , 2 , 3 , 4 , 5 }
ADDRESS  = {100,104,108,112,116}

v.begin()  --> IT RETURNS THE ADDRESS OF 1st ELEMENT        --> 100
v.end()    --> IT RETURNS THE ADDRESS OF NEXT OF LAST ELE   --> 120
v.rbegin() --> IT RETURNS THE ADDRESS OF LAST ELEMENT       --> 116
v.rend()   --> IT RETURNS THE ADDRESS OF BEFORE THE 1ST ELE --> 96

swap(v1,v2)--> IT WILL SWAP THE 2 VECTORS

v.empty()   --> IT RETURNS 1 IF VECTOR IS EMPTY ELSE RETURNS 0
v.front()   --> IT RETURNS THE FIRST ELE OF THE VECTOR
v.back()    --> IT RETURNS THE LAST ELE OF THE VECTOR
v.clear()   --> IT CLEARS ALL THE ELEMENT OF THE VECTOR

count(v.begin(),v.end(),ELE) --> IT RETURNS THE NO, OF TIMES ELE IS PRESENT - TC O(N)

v.push_back(ELEMENT) --> TC O(1)
v.insert(POSITION , ELEMENT) --> POSITION WITH RESPECT TO THE 1ST OR LAST ELEMENT --> TC O(N)
v.emplace_back() --> IT IS SAME AS PUSH BACK BUT EXECUTION TIME IS LESSER THAN PUSH BACK --> TC O(1)

v.pop_back()  --> TC O(1)
v.erase(START POS, END POS) --> END POS WILL NOT BE INCLUDED  --> TC O(N)
v.erase(POS) --> POSITION WITH RESPECT TO THE 1ST OR LAST ELEMENT
a(v)-->COPY PERFORMED WILL BE DEEP COPY

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> s={};
    // cout<<s.back()<<endl;

    vector <int> v={1,2,3,4};
    vector <int> w={5,6,7,8};
    vector <int> x={0,0,0,0};

    cout<<w.empty()<<endl;
    cout<<x.empty()<<endl;

    v.insert(v.begin()+4,5);
    v.erase(v.end()-1);
    v.erase(v.begin(),v.begin()+2);
    cout<<"Vector v --> ";
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Vector w --> ";
    for(int i: w){
        cout<<i<<" ";
    }
    cout<<endl;
    swap(v,w);
    cout<<"Vector v --> ";
    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Vector w --> ";
    for(int i: w){
        cout<<i<<" ";
    }
    cout<<endl;

    // TO COPY VECTOR V 
    vector<int> a(v);
    vector<int> b(v.begin(),v.end());
    cout<<"Vector a --> ";
    for(int i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Vector b --> ";
    for(int i: b){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"First Element -->"<<v.front()<<endl;
    cout<<"Last  Element -->"<<v.back()<<endl;

    cout<<"Element at index 2 -->"<<v.at(2)<<endl;

    cout<<endl;

    cout<<"Vector Before Poping : "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }

    v.pop_back();

    cout<<endl;

    cout<<"Vector After Poping : "<<endl;

    for(int i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Vector a --> ";
    for(int i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Vector b --> ";
    for(int i: b){
        cout<<i<<" ";
    }
    cout<<endl;
    




    return 0;
}