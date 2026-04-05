// #include<iostream>              
// using namespace std;
// int main(){
//     int a, b=1;
//     a=10;
//     if(++a)
//     cout<<b;
//     else
//     cout<<++b; 
// }
    //OUTPUT --> 1


// #include<iostream>              
// using namespace std;
// int main(){
//     int a=1, b=2;
//     if(a-- > 0 && ++b >2){
//         cout<<"Stage1 - Inside If ";
//     }else{
//         cout<<"Stage2 - Inside else ";
//     }
//     cout<<a<<" "<<b<<endl;
// }
    //OUTPUT --> Stage1 - Inside If 0 3


// #include<iostream>              
// using namespace std;
// int main(){
//     int a=1, b=2;
//     if(a-- > 0 || ++b >2){
//         cout<<"Stage1 - Inside If ";
//     }else{
//         cout<<"Stage2 - Inside else ";
//     }
//     cout<<a<<" "<<b<<endl;
// }
    //OUTPUT --> Stage1 - Inside If 0 2


// #include<iostream>
// using namespace std;
// int main(){
//     int number = 3;
//     cout<< (25*(++number));
// }
    //OUTPUT --> 100


// #include<iostream>
// using namespace std;
// int main(){
//     int a=1;
//     int b= a++;
//     int c= ++a;
//     cout<<b<<" ";
//     cout<<c<<endl;
// }
    //OUTPUT --> 1 3


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int b = a++;
//     cout<<b<<" ";
//     b = ++a;
//     cout<<a;
//     return 0;
// }
    //OUTPUT --> 10 12


#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 1;
    int c = a || --b;
    int d = a-- && --b;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}
    //OUTPUT --> 0 0 1 0