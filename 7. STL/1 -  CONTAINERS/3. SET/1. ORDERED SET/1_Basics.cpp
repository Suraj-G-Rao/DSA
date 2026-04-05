/*
PROPERTEIS OF SET :

--> SET IS A STL CONTAINER USED TO STORE UNIQUE VALUES
--> VALUES ARE STORED IN ORDERES STATE (INCREASING / DECREASING)
--> NO INDEXING , ELEMENTS ARE IDENTIFIED BY THEIR OWN VALUES
--> ONCE VALUES ARE INSERTED IN A SET , IT CANNOT BE MODIFIED

ADVANTAGES :

--> DYNAMIC SIZE , NO OVERFLOWING ERRORS
--> FASTER --> SEARCH,INSERT, DELTION COMPLEXITIY --> O(log(N))

DISADVANTAGES :

--> MORE MEMORY THAN ARRAY
--> CANNOT ACCESS ELEMENTS USING INDEXING
--> NOT SUITABLY USED FOR LARGE DATA SETS

OPERATIONS :

s.insert(ELE)  --> O(log(N))

s.erase(VALUE) --> O(log(N))
s.erase(POS)   --> O(log(N))

s.erase(START POS , END POS) --> O(N)

*/

#include<iostream>
#include<set>
using namespace std;
int main(){
    
    int n,i,ele;
    cin>>n;

    set <int> s;
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
    // advance(end_itr,-2);

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