// 1330       100 --> 13 Notes  50 --> 0 Notes    20 --> 1 Notes   10 --> 1 Notes
#include<iostream>
using namespace std;
int main(){
    int amount , rs500,rs100, rs50 , rs20, rs10;
    cin>>amount;
    switch(1){
        case 1 : rs500 = amount/500;
                 amount = amount % 500;
                 cout<< "The no. of 500 rs note is :\n"<<rs500<<endl;

        case 2  :rs100 = amount/100;
                 amount = amount % 100;
                 cout<< "The no. of 100 rs note is :\n"<<rs100<<endl;

        case 3  :rs50 = amount /50;
                 amount = amount %50;
                 cout<< "The no. of 50 rs note is :\n"<<rs50<<endl;

        case 4  :rs20 = amount/20;
                 amount = amount %20;
                 cout<< "The no. of 20 rs note is :\n"<<rs20<<endl;

        case 5  :rs10 = amount/10;
                 amount = amount %10;
                 cout<< "The no. of 10 rs note is :\n"<<rs10<<endl;
    }


    return 0;
}