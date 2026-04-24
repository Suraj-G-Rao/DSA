/*

PROBLEM STATEMENT :

SAMPLE INPUT  :
SAMPLE OUTPUT :

*/
#include<iostream>
#include<vector>
using namespace std;

int main() {

    int n;
    cout << "Enter the number: ";
    cin >> n;

    // DP array for memoization
    vector<int> dp(n + 1, 0);

    // Base case
    dp[0] = 0;
    if (n >= 1) {
        dp[1] = 1;
    }

    // Fill DP table (e.g., Fibonacci as example)
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << "DP Result: " << dp[n] << endl;

    return 0;
}
