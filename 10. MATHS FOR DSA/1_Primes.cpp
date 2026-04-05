#include<iostream>
using namespace std;
int main(){

    int n,count=0;
    cout<<"Enter The Number : ";
    cin>>n;

    //for(int i=1 ; i<sqrt(n) ;i++){   // TIME COMPLEXITY - O(sqrt(N) * log(N))
    for(int i=1 ; i*i<=n ;i++){        // TIME COMPLEXITY - O(sqrt(N))
        if(n%i == 0){
            count++;
            // if(i*i != n) count++;
            if((n/i) != i) count++;
        }
    }
    cout<<"Total No. of Factors : "<<count<<endl;
    if(count==2)  cout<<"The Number Is Prime "<<endl;
    else          cout<<"No "<<endl;



    return 0;
}