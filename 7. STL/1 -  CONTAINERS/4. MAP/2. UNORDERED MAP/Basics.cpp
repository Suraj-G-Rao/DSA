/*

--> MAP IS A STL CONTAINER WHICH STORES KEY VALUE PAIR .
--> THE ELEMENTS ARE STORED IN ASCENDING/DECENDING ORDER .
--> MULTIMAPS CAN HAVE DUPLICATE KEYS .
--> IMPLEMENTED THROUGH HASHING .

DECLARATION :

unordered_map< data_type_1 , data_type_2 > variable;
unordered_map< data_type_1 , data_type_2 , greater<data_type_1> > variable;  --> TO STORE THE KEYS IN DESCENDING ORDER


OPERATIONS :

m.erase(KEY)         -->O(1) ON AVG CASE O(N) ON WORST CASE
m.erase(ITERATOR)    -->O(1) ON AVG CASE O(N) ON WORST CASE
m.erase(START_ITR , END_ITR) -->O(1)

m1.swap(m2)
swap(m1,m2)

m.clear()
m.size()
m.max_size()
m.empty()

m.find(KEY)  --> IT RETURNS AN ITERATOR POINTING TO THE KEY IF PRESENT ELSE RETURNS AN END ITERATOR  --> O(log(N))
m.count(KEY) --> IT COUNTS THE NO. OF OCC OF THE KEY

S = {{10,"Suraj"}, {20,"Shyam"} ,{30,"Rohit"}}
lower_bound(20) -->(20) RETURNS ITREATOR POINTING TO THE ELEMENT IF PRESENT ELSE RETURNS JUST GREATER VALUE --> {20,"Shyam"}
upper_bound(20) -->(30)RETURNS ITREATOR POINTING TO THE ELEMENT JUST GREATER ELE --> {30,"Rohit"}

*/
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    // UNORDERED MAP INITIALIZATION :

    // unordered_map<int,int>m;
    unordered_map<int,int>m={{1,1},{2,2},{3,3}};
    // unordered_map<int,int, greater<int>>m; // --> TO STORE THE KEYS IN DESCENDING ORDER

    // INSERTION : O(1) ON AVG CASE O(N) ON WORST CASE

    m.insert({5,5});
    m.insert({5,6});
    // m[5]=6; // ONLY THIS OPERATION ALTERS THE VALUE
    m.insert(make_pair(6,6));

    // DELETION :

    // m.erase(5);

    unordered_map<int,int> :: iterator itr;
    itr=m.begin();
    advance(itr,2);
    m.erase(itr);

    m.erase(m.find(5)); //--> IT WILL ERASE THE KEY OF 5


    //ITERATING THROUGH THE MAP

    //unordered_map<int,int> :: iterator it;

   
    // for(it= m.begin() ; it!= m.end() ; it++){
    //     cout<<it->first<<" --> "<<it->second<<endl;
    // }

    // TO ITERATE IN REVERSE ORDER
    // unordered_map<int,int> :: reverse_iterator it;
    // for(it= m.rbegin() ; it!= m.rend() ; it++){
    //     cout<<it->first<<" --> "<<it->second<<endl;
    // }

    for(auto i :m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    
    

    return 0;
}