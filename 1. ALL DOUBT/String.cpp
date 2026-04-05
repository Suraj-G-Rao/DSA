#include<iostream>
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
int main(){

    string result = "b2[ca";

    Using_while_loop(result);
    Using_for_loop(result);




    return 0;
}