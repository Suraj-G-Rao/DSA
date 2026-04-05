//TO CHECK IF THE GIVEN CHARACTER IS VOWEL OR CONSONANT

/*
SAMPLE INPUT:
Enter an alphabet: a

SAMPLE OUTPUT --> It is a vowel
*/

#include<iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;
    switch(alphabet){
        case 'a': cout<<"It is a vowel";
                  break;
        case 'e': cout<<"It is a vowel";
                  break;
        case 'i': cout<<"It is a vowel";
                  break;
        case 'o': cout<<"It is a vowel";
                  break;
        case 'u': cout<<"It is a vowel";
                  break;
        default: cout<<"It is a consonant";
                 break;
    }
    return 0;
}