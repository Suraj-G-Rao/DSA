/*
PROPERTEIS OF MULTISET :

--> MULTISET IS A STL CONTAINER USED TO STORE UNIQUE OR DUPLICATE VALUES
--> VALUES ARE STORED IN ORDERES STATE (INCREASING / DECREASING)
--> NO INDEXING , ELEMENTS ARE IDENTIFIED BY THEIR OWN VALUES
--> ONCE VALUES ARE INSERTED IN A SET , IT CANNOT BE MODIFIED

OPERATIONS :

S = { 1 , 2 , 2, 3 ,4}

INSERTION :

s.insert(ELE)  --> O(log(N))

DELETION:

s.erase(2) --> O(log(N))  --> IT WILL ERASE ALL THE SAME VALUE OF 2
s.erase(POS)   --> O(log(N))
s.erase(START POS , END POS) --> O(N)

find(ELE)  --> RETURNS AN ITERATOR POINTING TO FIRST OCCURENCE OF THAT ELEMENT IF EXISTS ELSE RETURNS END ITREATOR --> O(log(N))

count(ELE) --> RETURNS NO. OF TIMES THAT ELE IS REPEATED  --> O(K+log(N)) WHERE K IS THE NO. OF OCC

S = {10 , 20 , 20 , 30 , 40}
lower_bound(20) -->(20) RETURNS ITREATOR POINTING TO THE ELEMENT IF PRESENT ELSE RETURNS JUST GREATER VALUE --> O(N)
upper_bound(20) -->(30)RETURNS ITREATOR POINTING TO THE ELEMENT JUST GREATER ELE --> O(N)
*/

#include<iostream>
#include<set>
using namespace std;
int main(){
    
    int n,i,ele;
    cin>>n;

    multiset <int> s;
    // set <int , greater<int> > s;

    for(i=0;i<n;i++){
        cin>>ele;
        s.insert(ele);
    }

    // TRAVERSING THE SET 

    set<int>::iterator it;

    for( it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    // DELETING THE ELEMENTS OF THE SET
    

    // 1ST METHOD USING VALUE
    s.erase(2);

    cout<<endl;

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    // 2ND METHOD USING POS

    auto itr = s.begin();
    itr++;

    s.erase(itr);

    cout<<endl;

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    // 3RD METHOD USING RANGE OF POS

    auto start_itr=s.begin();
    auto end_itr=s.begin();

    advance(end_itr,2);

    s.erase(start_itr , end_itr);

    cout<<endl;

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;







    cout<<endl<<"s --> ";

    for(auto i : s){
        cout<<i<<" ";
    }

    
    return 0;
}