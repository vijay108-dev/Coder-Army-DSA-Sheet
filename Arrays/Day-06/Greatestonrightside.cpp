// Greatest on right side

// Difficulty: Easy
// You are given an array arr[]. Replace every element with the next greatest element (the greatest element on its right side) in the array. Note: There is no element next to the last element, so replace it with -1.

// Examples:

// Input: arr[] = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 5, 5, 2, -1]
// Explanation: 
// For 16 the greatest element on its right is 17. For 17 it's 5. 
// For 4 it's 5. For 3 it's 5. For 5 it's 2. 
// For 2 it's -1(no element to its right). 
// Input: arr[] = [2, 3, 1, 9]
// Output: [9, 9, 9, -1]
// Explanation: For each element except 9 the greatest element on its right is 9.

// Constraints:
// 1 <= arr.size() <= 105
// 1 <= arr[i]<= 106

// class Solution {
// public:
//     vector<int> nextGreatest(vector<int> arr){
//         int n=arr.size();
//         int maxi = -1;
//         for(int i=n-1;i>=0;i--)
//         {
//             int curr=arr[i];
//             arr[i]=maxi;
//             if(curr>maxi)
//             {
//                 maxi=curr;
//             }
//         }
//         return arr;
//     }
// };
//TC = O(N)
//SC = O(1)

#include <iostream>
#include <vector>
using namespace std;
vector<int> nextGreatest(vector<int> arr){
    int n = arr.size();
    int maxi = -1;
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        arr[i] = maxi;
        if(curr>maxi){
            maxi = curr;
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>ans=nextGreatest(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}