/*

PROBLEM STATEMENT :

SAMPLE INPUT  :
SAMPLE OUTPUT :

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array (common step in greedy algorithms)
    sort(arr.begin(), arr.end());

    cout << "Sorted Elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
