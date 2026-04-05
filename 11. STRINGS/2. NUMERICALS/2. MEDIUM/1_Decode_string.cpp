/*

SAMPLE INPUT  :  3[b2[ca]]
SAMPLE OUTPUT :  bcacabcacabcaca   --> THIS IS THE FIRST STEP 3[bcaca]

*/

// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void Using_while_loop(string result)
{

    string str = "";
    while (!result.empty() && result.back() != '[')
    {
        str.push_back(result.back());
        result.pop_back();
    }
    // result.pop_back();


    reverse(str.begin(), str.end());

    result.pop_back(); // TO REMOVE '[' FROM RESULT
    cout<<"USING WHILE LOOP "<<endl;
    cout << "STR --> " << str << endl;
    cout << "RESULT --> " << result << endl<<endl;
}
void Using_for_loop(string result)
{

    string str = "";
    int j;
    for (j = result.size()-1; j >= 0; j--)
    {
        if (result[j] != '[')
        {
            str.push_back(result[j]);
            result.pop_back();
        }
        else
        {
            result.pop_back();
            break;
        }
    }
    reverse(str.begin(), str.end());


    string num="";
    cout<<"J --> "<<j<<endl;

    for (int k = j-1; k >= 0; k--)
    {
        if (result[k] >= '0' && result[k] <= '9')
        {
            num.push_back(result[k]);
            result.pop_back();
        }
        else
            break;
    }
    reverse(num.begin(), num.end());
    

    cout<<"USING FOR LOOP "<<endl;
    cout << "STR --> " << str << endl;
    cout << "RESULT --> " << result << endl;
    cout << "NUM --> " << num << endl;
}
string Decoded_String(string s){

    string result="";

    for(int i=0 ; i<s.size() ;i++){
        if(s[i] != ']'){
            result.push_back(s[i]);
        }
        else{

            string str="";
            int j;
            for(j=result.size()-1 ;j>=0 ; j--){
                if(result[j]!='['){
                    str.push_back(result[j]);
                    result.pop_back();
                }
                else{
                    // result.pop_back();
                    break;
                }
            }   

            // string str="";
            // while(!result.empty() && result.back()!='['){
            //     str.push_back(result.back());
            //     result.pop_back();
            // }

            reverse(str.begin(),str.end());


            result.pop_back();   // TO REMOVE '[' FROM RESULT

            string num="";
            // while(!result.empty() && (result.back()>='0' && result.back()<='9')){
            //     num.push_back(result.back());
            //     result.pop_back();
            // }
            for(int k=j-1 ; k>=0 ; k--){
                if(result[k]>='0' && result[k]<='9'){
                    num.push_back(result[k]);
                    result.pop_back();
                }
                else  break;
            }
            reverse(num.begin(),num.end());

            int digit = stoi(num);

            // while(digit){
            //     result+=str;
            //     digit--;
            // }

            for(int l=0; l<digit ; l++){
                result+=str;
            }

        }
    }
    return result;
}

int main(){
    string s;
    cout<<"Enter the Encoded string : ";
    cin>>s;

    cout<<Decoded_String(s)<<endl;



    return 0;

}

