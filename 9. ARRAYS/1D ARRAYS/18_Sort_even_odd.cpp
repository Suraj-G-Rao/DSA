/*
SORT THE ARRAY BY EVEN NO. ON LEFT ODD NO. ON RIGHT

SAMPLE INPUT  :  [1,2,3,4,5]
SAMPLE OUTPUT :  [4,2,3,1,5] --> JUST EVEN NO. ON THE LEFT ON ANY 
*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void Sort_even_odd(vector<int>& v){
//     int i=0,j=v.size()-1;
//     while(i<j){
//         if(v[i]%2==1  && v[j]%2==0){
//             swap(v[i],v[j]);
//             i++;
//             j--;
//         }
//         else if(v[i]%2==0){
//             i++;
//         }
//         else if(v[j]%2==1){
//             j--;
//         }
//     }
//     return ;
   
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n;i++){
//         cin>>v[i];
//     }
//     Sort_even_odd(v);

//     for(int i=0; i<v.size() ;i++) cout<<v[i]<<" ";

    


//     return 0;

// }

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
        if(nums[i] % 2 == 0) {  // even number
       
        // int temp = nums[i];
            int j = i - 1;

            // Shift odd numbers to the right
            // while(j >= 0 && nums[j] % 2 != 0) {
            while(j >= 0 && nums[j] % 2 == 0) {
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
