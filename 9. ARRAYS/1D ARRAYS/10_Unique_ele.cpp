//UNIQUE ELEMENT IN THE ARRAY

// SAMPLE INPUT  : 1 2 2 3 3 4 5 4 5
// SAMPLE OUTPUT : 1

// FIRST APPROACH

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a[100],i,j,b;
//     cin>>n;

//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(i=0;i<n;i++){
//         b=0;
//         for(j=i;j<n;j++){
//             if(a[i]==a[j]){
//                 b=1;
//                 break;
//             }
//         }
//         if(b==0){
//             cout<<"Unique no. is "<<a[i]<<endl;
//         }
//     }
//     return 0;
// }

//SECOND APPROACH USING XOR OPERATOR

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a[100],i,j,ans=0;
//     cin>>n;

//     for(i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(i=0;i<n;i++){
//         ans^=a[i];
//     }
//     cout<<"Unique no. is "<<ans<<endl;
    
    
//     return 0;
// }

// THIRD APPROACH FOR 2 UNIQUE ELEMENTS

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n,b[2];
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int a=0,c=0,s1,s2,m;
        m=sizeof(nums)/sizeof(nums[0]);

        for(int i=0;i<m;i++){
            a^=nums[i];
        }
        s1=0,s2=0;
        
        while((a & 1) == 0){
            c++;
            a >>= 1;
        }

        int mask=1<<c;
        for(int i=0;i<m;i++){
            if(nums[i] & mask){
                s1^=nums[i];
            }
            else{
                s2^=nums[i];
            }
        }
        
        if(s1!=0 && s2!=0){
            cout<<s1<<endl;
            cout<<s2<<endl;
        }
        else if(s1!=0 && s2==0){
            cout<<s1;
        }
        else{
            cout<<s2;
        }


    return 0;
}