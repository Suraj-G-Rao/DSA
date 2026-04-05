#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1 = {1,1,1,1,1,1,2,2,2,2,3,3,3,4};
    for(auto it: set1){
        cout<<it<<" ";
    }
    return 0;
}

/*OPTIONS:
a) Compilation Error
b) Runtime Error
c) 4
d) 1 2 3 4
*/

//OUTPUT --> 1 2 3 4