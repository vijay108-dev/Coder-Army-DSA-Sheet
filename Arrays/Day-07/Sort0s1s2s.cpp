// Sort 0s, 1s and 2s

// avatar
// Discuss Approach
// Difficulty: Medium
// Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
// Note: You need to solve this problem without utilizing the built-in sort function.

// Examples:

// Input: arr[] = [0, 1, 2, 0, 1, 2]
// Output: [0, 0, 1, 1, 2, 2]
// Explanation: 0s, 1s and 2s are segregated into ascending order.
// Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
// Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
// Explanation: 0s, 1s and 2s are segregated into ascending order.
// Follow up: Could you come up with a one-pass algorithm using only constant extra space?

// Constraints:
// 1 ≤ arr.size() ≤ 105
// 0 ≤ arr[i] ≤ 2

// class Solution {
// public:
//     void sort012(vector<int>& arr) 
//     {
//         int start = 0;
//         int mid = 0;
//         int end = arr.size()-1;
//         while(mid<=end)
//         {
//             if(arr[mid]==0)
//             {
//                 swap(arr[start], arr[mid]);
//                 start++;
//                 mid++;
//             }
//             else if(arr[mid]==1)
//             {
//                 mid++;
//             }
//             else
//             {
//                 swap(arr[mid], arr[end]);
//                 end--;
//             }
//         }
//     }
// };
//TC=O(N)
//SC = O(1)

#include <iostream>
#include <vector>
using namespace std;
    void sort012(vector<int>& arr)
    {
        int start = 0;
        int mid = 0;
        int end = arr.size()-1;
        while(mid<=end)
        {
            if(arr[mid]==0)
            {
                swap(arr[start], arr[mid]);
                start++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid],arr[end]);
                end--;
            }
        }
    }
int main(){
    vector<int>arr={0,1,2,0,1,2};
    sort012(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}