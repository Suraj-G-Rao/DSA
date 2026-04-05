/*
--> VALUES ARE STORED IN UNORDERED MANNER

INSERTION , DELETION , SEARCH --> O(1) ON AN AVG CASE
INSERTION , DELETION , SEARCH --> O(N) ON WORST CASE(WHEN SIZE>CAPACITY HENCE REHASHING TAKES PLACE)
                                  
SINCE THESE OPERATION TAKES PLACE USING HASHING

INSERTION & DELETION:

SINGLE ELE   --> O(1) ON AN AVERAGE CASE
                 O(N) ON WORST CASE 
                 
MULTIPLE ELE --> O(N) ON AN AVERAGE CASE
                 O(N*(N+1)) ON WORST CASE


FIND :

SINGLE ELE   --> O(1) ON AN AVERAGE CASE
                 O(N) ON WORST CASE

COUNT :

SINGLE ELE   --> O(n) ON AN AVERAGE CASE   ,  WHERE 'n' IS THE NO. OF OCC
                 O(N) ON WORST CASE        ,  WHERE 'N' SIZE OF THE UNORDERED SET

*/
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    
    int n,i,ele;
    cin>>n;

    unordered_multiset <int> s;


    for(i=0;i<n;i++){
        cin>>ele;
        s.insert(ele);
    }

    // TRAVERSING THE SET 

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



    
    return 0;
}