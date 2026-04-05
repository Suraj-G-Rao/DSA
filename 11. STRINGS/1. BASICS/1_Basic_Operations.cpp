/*

OPERATIONS ON STRINGS :

cin.getline(str,len);


str.size()
str.length()  --> IT RETURNS THE SIZE OF THE STRING WITH TC - O(1)
strlen(CH)    --> IT RETURNS THE SIZE OF THE CHAR ARRAY WITH TC - O(N)
str.capacity()
reverse(start_pos,end_pos)  --> IT ALTERS THE ORIGINAL STRING 
s.find(string) --> IT RETURNS A POINTER IF EXITS OR ELSE RETURNS NULL
s.erase(start_pointer , len)

str.substr(POS,LEN) --> IT RETURNS A SUBSTRING  TC - O(N) WHERE N IS THE LENGTH OF THE STRING
str.substr(POS)     --> IT RETURNS A SUBSTRING STARTING FROM POS TO END OF THE STRING
to_string(a)        --> IT RETURNS A STRING WHICH IS TYPECASTING OF 'a' HERE 'a' IS AN INTEGER

STRING CONCATINATION 

S1 = s1+s2       -->  '+' IS USED TO CONCATINATE 2 STRINGS
S1 += S2         -->   S2 IS GETTING APPENDED TO S1  .  NO EXTRA SPACE IS CREATED .
S1 = S1 + S2     -->   HERE COPY OF S1 IS CREATED AND S2 IS APPENDED LATER IT IS PUT INTO S1  . EXTRA SPACE IS CREATED .
strcat(s1,s2)    -->   USED TO CONCATINATE 2 CHAR ARRAYS
s1.push_back(s2) -->   IT IS USED TO PUSH A CHACRACTER TO A STRING .
s1.pop_back()    -->   IT IS USED TO POP THE LAST CHARACTER TO A STRING .

*/
#include<iostream>
#include<typeinfo>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){

    // string name;
    // cout<<"Enter Your Name : ";
    // cin.getline(str,len);
    // getline(cin,name);

    // cout<<"Size of your Name --> "<<name.size()<<endl;
    // cout<<"Length of your Name --> "<<name.length()<<endl;
    // cout<<"Capacity of your Name --> "<<name.capacity()<<endl;

    // reverse(name.begin()+1,name.end()-1);
    // cout<<"Your Name after reversing --> "<<name<<endl;

    // cout<<"Substring --> "<<name.substr(0,5)<<endl;

    string c = "abcdef";
    char ch[] = "abcdef";

    c[2]='@';
    ch[2]='\0';

    cout<<"c --> "<<c<<endl;
    cout<<"ch --> "<<ch<<endl;




    //STRING CONCATINATION

    string s1 ="Suraj ";
    string s2 ="G Rao";
    
    cout<<"After Concatination --> "<<s1+s2<<endl;

    char s = '.';

    s1.push_back(s);
    cout<<"S1 AFTER PUSH BACK OPERATION : "<<s1<<endl;
    s1.pop_back();
    cout<<"S1 AFTER POP BACK OPERATION : "<<s1<<endl;

    char s3[20]= "Hello ";
    char s4[20]= "World ";

    
    cout<<"After Character concatination : "<<strcat(s3,s4)<<endl;

    /*
    S1 += S2 IS DIFFRENT FROM S1 = S1+S2

    IN S1 = S1 +S2 A COPY OF S1 GETS CREATED WHEREAS 
    IN S1+=S2 THERE IS NO COPY CREATED 

    */

   int a= 432;
   string b=to_string(a);
   cout<<typeid(a).name()<<endl;
   b+="10";
   cout<<b<<endl;
    
    return 0;
}