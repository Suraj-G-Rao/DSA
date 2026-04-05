/*

--> MAP IS A STL CONTAINER WHICH STORES KEY VALUE PAIR .
--> THE ELEMENTS ARE STORED IN ASCENDING/DECENDING ORDER .
--> MULTIMAPS CAN HAVE DUPLICATE KEYS .
--> IMPLEMENTED THROUGH BINARY SEARCH TREE .

DECLARATION :

multimap< data_type_1 , data_type_2 > variable;
multimap< data_type_1 , data_type_2 , greater<data_type_1> > variable;  --> TO STORE THE KEYS IN DESCENDING ORDER


OPERATIONS :

m.erase(KEY)         -->O(log(N))
m.erase(ITERATOR)    -->O(log(N))
m.erase(START_ITR , END_ITR) -->O(N)

m1.swap(m2)
swap(m1,m2)

m.clear()
m.size()
m.max_size()
m.empty()

m.find(KEY)  --> IT RETURNS AN ITERATOR POINTING TO THE KEY IF PRESENT ELSE RETURNS AN END ITERATOR  --> O(log(N))
m.count(KEY) --> IT COUNTS THE NO. OF OCC OF THE KEY

m.equal_range(5) --> IT RETURNS A PAIR WHICH CONTAINS 2 ITERATOR {START_ITR OF 5 , END_ITR OF 5} 

S = {{10,"Suraj"}, {20,"Shyam"} ,{30,"Rohit"}}
lower_bound(20) -->(20) RETURNS ITREATOR POINTING TO THE ELEMENT IF PRESENT ELSE RETURNS JUST GREATER VALUE --> {20,"Shyam"}
upper_bound(20) -->(30)RETURNS ITREATOR POINTING TO THE ELEMENT JUST GREATER ELE --> {30,"Rohit"}

*/
#include<iostream>
#include<map>
using namespace std;

int main(){

    // MULTIMAP INITIALIZATION :

    // multimap<int,int>m;
    multimap<int,int>m={{1,1},{2,2},{3,3}};
    // multimap<int,int, greater<int>>m; // --> TO STORE THE KEYS IN DESCENDING ORDER

    // INSERTION : O(log(N))

    m.insert({5,5});
    m.insert({5,6});
    // m[5]=6; // THIS OPERATION IS NOT VALID IN MULTIMAP  
    m.insert(make_pair(6,6));
    

    // SEARCHING RANGE OF ELEMENTS
    auto a=m.equal_range(5);

    for(auto i=a.first ; i!= a.second ; i++){
        cout<<i->first<<" --> "<<i->second<<endl;
    }

    // DELETION :

    // m.erase(5);

    multimap<int,int> :: iterator itr;
    itr=m.begin();
    advance(itr,2);
    m.erase(itr);

    m.erase(m.find(5)); //--> IT WILL ERASE THE 1ST OCC OF 5


    //ITERATING THROUGH THE MAP

    //multimap<int,int> :: iterator it;

   
    // for(it= m.begin() ; it!= m.end() ; it++){
    //     cout<<it->first<<" --> "<<it->second<<endl;
    // }

    // TO ITERATE IN REVERSE ORDER
    // multimap<int,int> :: reverse_iterator it;
    // for(it= m.rbegin() ; it!= m.rend() ; it++){
    //     cout<<it->first<<" --> "<<it->second<<endl;
    // }

    for(auto i :m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    
    

    return 0;
}