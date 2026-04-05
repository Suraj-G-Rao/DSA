/*
SAMPLE INPUT  : [1,2,2,1,1,3]
SAMPLE OUTPUT : TRUE
EXPLANATION   : The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

SAMPLE INPUT  : [-3,0,1,-3,1,1,1,-3,10,0]
SAMPLE OUTPUT : FALSE
*/


// BEST APPROACH
#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
bool uniqueOccurrences(vector<int>& a) {
        map<int,int> m;
        for(int i=0;i<a.size();i++){
           m[a[i]]+=1;
        }
        set<int>s;
        for(auto i : m){
            s.insert(i.second);
        }
        // if(s.size()==m.size()) return true;
        // else return false;
        return (s.size()==m.size());
    }
int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(uniqueOccurrences(a))
        cout<<"Yes array doesnot have unique occurence  ";
    else 
        cout<<"No the array has unique occurence";
    
    return 0;
}

// MY FIRST APPROACH
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a[100],i,j,c=0,d;
//     cin>>n;
//     int b[n];
//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(i=0;i<n;i++){
//         c=1;
//         d=0;
//         for(j=i;j<n;j++){
//             if(a[i]==0){
//                 d=1;
//                 break;
//             }
//             if(a[i]==a[j]){
//                 c++;
//                 a[j]=0;
//             }
//         }
//         if(d==1){
//             b[i]=0;
//         }
//         else{
//            b[i]=c;
//         }
//     }
//     int size= sizeof(b)/sizeof(b[0]);
//     for(i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     for(i=0;i<size;i++){
//         cout<<b[i]<<" ";
//     }     
//     return 0;
// }

// MY SECOND APPROACH

// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main(){
//     int n,i,num,q,d;
//     cin>>n;
//     vector<int> a(n);
//     vector<int> hash(100,0);

//     for(i=0;i<n;i++){
//         cin>>a[i];
//         hash[a[i]]+=1;
//     }

//     set<int>s;
//     for(int i=0;i<n;i++){
//         d=0;
//         if(s.find(hash[a[i]])!=s.end()){
//             d=1;
//             cout<<"NO array doesnot have unique occurence  ";
//             break;
//         }
//         else{
//             s.insert(hash[a[i]]);
//         }
       
//     }
//     cout<<d;
//     if(d==0){
//         cout<<"Yes the array has unique occurence";
//     }

    
//     return 0;
// }

// THIRD APPRO