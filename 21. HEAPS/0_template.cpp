/*

PROBLEM STATEMENT :

SAMPLE INPUT  :
SAMPLE OUTPUT :

*/
#include<iostream>
#include<queue>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Max Heap (default priority_queue)
    priority_queue<int> maxHeap;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        maxHeap.push(ele);
    }

    cout << "Max Heap Elements: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    cout << "Enter the elements for Min Heap: ";
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        minHeap.push(ele);
    }

    cout << "Min Heap Elements: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    return 0;
}
