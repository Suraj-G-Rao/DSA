// GIVEN AN ARRAY OF STRINGS . YOU CAN MOVE ANY NUMBER OF CHARACTERS FROM ONE STRING TO ANY OTHER STRING ANY NO. OF TIMES.
// YOU JUST HAVE TO MAKE ALL OF THEM EAUAL . IF U CAN MAKE PRINT 'Yes' ELSE PRINT 'No'

// SAMPLE INPUT  : ["COLLEGEEE" , "COLL" , COLLEGGE]
// SAMPLE OUTPUT : Yes 

// SAMPLE INPUT  : ["WALL" , "AH" , WALLAHAH]
// SAMPLE OUTPUT : No

#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool is_strings_equal( vector<string> &v ){
    map<char,int>m;

    for(auto s : v){
        for(auto c : s){
            m[c]++;
        }
    }

    for(auto ele :m){
        if(ele.second % v.size() != 0){
            return false;
        }
    }
    return true;
}
int main(){

    int n;
    cin>>n;

    vector<string>v(n);

    for(int i=0; i<n ;i++){
        cin>>v[i];
    }

    cout<<(is_strings_equal(v)? "Yes" : "No")<<endl;

    



    return 0;
}
