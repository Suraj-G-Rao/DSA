#include<iostream>
using namespace std;
int& func(int a) {    // DRAWBACK NUM IS LOCAL VARIABLE AND DOESNOT EXIT OUT OF THE FUNCTION BAD PRACTICE
    int num = a;
    int& ans = num;
    return ans;
}

// DRAWBACK N IS LOCAL VARIABLE AND DOESNOT EXIT OUT OF THE FUNCTION BAD PRACTICE
int* fun(int n) {     
    int* ptr = &n;
    return ptr;
}
void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}
int main(){

    int i=19;
    int &j = i;  // --> REFERENCE VARIABLE

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    

    cout<<i<<" "<<j<<endl;

    int n = 5;

    cout << "Before " << n << endl;
    // update(n);
    update2(n);
    cout << "After " << n << endl;

    fun(n);
    return 0;
}