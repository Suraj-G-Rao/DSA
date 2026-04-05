#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for(int i = 1; i < n; i++) {
        // if(nums[i] % 2 == 0) {  // even number
        if(nums[i] != 0) {
        // int temp = nums[i];
            int j = i - 1;

            // Shift odd numbers to the right
            // while(j >= 0 && nums[j] % 2 != 0) {
            while(j >= 0 && nums[j] == 0) {
                swap(nums[j + 1],nums[j]);
                j--;
            }
            // nums[j + 1] = temp;
        }
    }

    // Print result
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
