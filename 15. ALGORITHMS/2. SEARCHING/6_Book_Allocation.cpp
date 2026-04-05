/*

PROBLEM :  https://bit.ly/3GiCqY0

SMILAR PROBLEM : https://bit.ly/31v3Jiy 

SAMPLE INPUT  : [30,20,10,40,5,45] , m=3 days
SAMPLE OUTPUT : 50 (minimum hours to study all the books)

TC : O(log(N))

*/

#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    // cout << "checking for mid "<< mid <<endl;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        if (studentCount > m)
        {
            return false;
        }
        // cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            // cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{

    int n, days;
    cout << "Enter The Size Of The array : ";
    cin >> n;
    vector<int> v(n);

    cout << "Enter The Array Elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << "Enter The no. of Days : ";
    cin >> days;

    cout << "Minimum Hours : " << allocateBooks(v, v.size(), days) << endl;

    return 0;
}