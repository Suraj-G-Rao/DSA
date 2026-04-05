/*

         STATIC MEMORY                                  DYNAMIC MEMORY

--> Memory automatically gets deallocated        Memory dealllocation should be done manually
                                                 int* a = new int;
                                                 delete(a);

                                                 int *arr = new int[n];
                                                 delete []arr;

ADRRESS TYPECASTING : https://www.naukri.com/code360/guided-paths/basics-of-c/content/118785/offering/1381137?leftPanelTabValue=PROBLEM&customSource=studio_nav

*/
#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 

    return sum;
}

int main() {

    char* c = new char;  //--> TOTAL 9 BYTES (8 BYTES FOR STATIC MEMORY FROM STACK)
                         //                  (1 BYTE FOR DYNAMIC MEMORY FROM HEAP)

    int n;
    cin >> n;
    
    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

// //case 1
//     while(true) {
//         int i = 5;
//     }
    
// //case 2
//     while(true) {
//         int* ptr = new int;
//     }




    return 0;
}