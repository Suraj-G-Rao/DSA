/*

OPERATIONS :

s.size() 
s.max_size()  --> RETURNS THE MAX SIZE OF THE SET
s.empty()     --> RETURNS 1 IF SET IS EMPTY
s.clear()
s.find(ELE)   --> RETURNS POS OF THE ELEMENT IF PRESENT ELSE RETUNS POS OF LAST+1 ELE OR END ITREATOR
s.count(ELE)  --> RETURNS THE NO. TIMES THE ELE IS REPEATED

S = {10 , 20 , 30 , 40}
lower_bound(20) -->(20) RETURNS ITREATOR POINTING TO THE ELEMENT IF PRESENT ELSE RETURNS JUST GREATER VALUE
upper_bound(20) -->(30)RETURNS ITREATOR POINTING TO THE ELEMENT JUST GREATER ELE

NOTE : IF ELE IS NOT PRESENT WHILE USING lower_bound OR upper_bound IT WILL PRINT TOTAL NO. OF ELEMENTS IN THE SET


*/

#include<iostream>
#include<set>
using namespace std;
int main(){
    
    int n,i,ele;
    // cin>>n;

    set <int> s={10,20,30,40,50,60};
    cout<<"Empty Or Not --> "<<s.empty()<<endl;

    // for(i=0;i<n;i++){
    //     cin>>ele;
    //     s.insert(ele);
    // }

    cout<<"set s--> "<<endl;

    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"set size--> "<<s.size()<<endl;
    cout<<"set MAX size--> "<<s.max_size()<<endl;
    cout<<"set empty or not --> "<<s.empty()<<endl;
    
    // SEARCHING 

    if(s.find(40) != s.end()){
        cout<<"The element is present ."<<endl;
    }
    else{
        cout<<"ELEMENT NOT FOUND"<<endl;
    }

    if(s.count(40)){
        cout<<"The element is present ."<<endl;
    }
    else{
        cout<<"ELEMENT NOT FOUND"<<endl;
    }

    cout<<"IS 80 IN SET USING UPPER_BOUND --> "<<*(s.upper_bound(80))<<endl;
    cout<<"IS 80 IN SET USING LOWER_BOUND --> "<<*(s.lower_bound(80))<<endl;
   
    return 0;
}