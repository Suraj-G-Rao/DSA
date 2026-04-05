#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;
bool comp2(pair<int,int> el1, pair<int,int> el2) {
	if(el1.first < el2.first) {
		return true; 
	}
	if(el1.first == el2.first) {
	    if(el1.second > el2.second) {
			return true; 
		}
	}
	return false; 
}
int main(){
 
    // v
    // vector<pair<int,int>> v[] = {{1, 4},{5, 2},{5, 9}};
    // after sorting v[] = {{1, 4}, {5, 9}, {5, 2}}
    vector<pair<int, int>> v = {{1, 4},{5, 2},{5, 9}};
    sort(v.begin(), v.end(), comp2); 

    // Print the sorted vector
    for (const auto& p : v) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
 
    // sorts in ascending according to first 
    // if first is equal then sorts according to second in ascending 

    // i want you to sort this in such a way 
    // that the element who have first element in pair smaller
    // appears first, and if first is equal then sort according 
    // to second and keep the larger second
 
    // COMPARATOR 
    // sort(v.begin(), v.end()); // sorts everything in ascending order
    // sort(v.begin(), v.end(), comp2); 
 
 
    // descending 
    // sort(v.begin(), v.end()); 
    // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending 
    // sort(v.begin(), v.end(), greater<int>); 






    return 0;
}