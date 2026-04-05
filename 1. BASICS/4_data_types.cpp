// HOW TO THE THE VARIABLE DATA TYPE
/*
typeid(x).name() returns the data type of x, for example, it returns:

‘i’ for integers,
‘d’ for doubles,
‘f’ for float, 
‘c’ for char, 
Pi’ for the pointer to the integer,
‘Pd’ for the pointer to double,’
‘Pf’ for the pointer to float, 
‘Pc’ for the pointer to char,
‘PPi’ for the pointer to pointer to integer.
Single Pointer results in  prefix ‘P’,
double-pointer results in ‘PP’

*/
#include<iostream>
#include<typeinfo>
using namespace std;
int main(){

    auto x = 4;
    auto y = 3.37;
    auto z = 3.37f;
    auto c = 'a';
    auto ptr = &x;
    auto pptr = &ptr; //pointer to a pointer
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(ptr).name() << endl;
    cout << typeid(pptr).name() << endl;
     
    return 0;
}
// Integer Data type
// #include<iostream>
// using namespace std;
// int main(){
//     // int a=4;
//     bool a=true;
//     cout<<(float)(sizeof(a));
//     return 0;
// }

//Character Data type
// #include<iostream>
// using namespace std;
// int main(){
//     char name='a';
//     cout<<name;
//     return 0;
// }

//Boolean Data type
// #include<iostream>
// using namespace std;
// int main(){
//     bool flag=true;
//     cout<<flag;
//     return 0;
// }

//Floating point data type
// #include<iostream>
// using namespace std;
// int main(){
//     float a=5;   //Precision upto 7 decimal places
//     float b=11;
//     float c=5/11;
//     float c=a/b;
//     cout<<c; 
//     return 0;
// }

//Double floating point Data type
// #include<iostream>
// using namespace std;
// int main(){
//     double a=5.6498135;   //Precision upto 15 decimal places
//     cout<<a;
//     return 0;
// }

//Wide character data type
// #include<iostream>
// using namespace std;
// int main(){
//     wchar_t name=L'hi'; //'L' tells the compiler that it is of type wide character
//     cout<<name;
//     return 0;
// }

//String data type
// #include<iostream>
// using namespace std;
// int main(){
//     string name="Suraj";
//     cout<<name;
//     return 0;
// }

//Size of data types
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     float b;
//     double c;
//     char d;
//     bool e;
//     wchar_t f;
//     cout<<"Size of int is: "<<sizeof(a)<<endl;
//     cout<<"Size of float is: "<<sizeof(b)<<endl;
//     cout<<"Size of double float is: "<<sizeof(c)<<endl;
//     cout<<"Size of char is: "<<sizeof(d)<<endl;
//     cout<<"Size of bool is: "<<sizeof(e)<<endl;
//     cout<<"Size of wide char is: "<<sizeof(f)<<endl;
//     return 0;
// }

