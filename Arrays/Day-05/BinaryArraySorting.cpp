// Binary Array Sorting

// Difficulty: Medium
// You are given a binary array arr[], where each element is either 0 or 1. Your task is to rearrange the array in increasing order in place (without using extra space). You do not need to return anything; simply modify the input array.

// Examples:

// Input: arr[] = [1, 0, 1, 1, 0]
// Output: [0, 0, 1, 1, 1]
// Explanation: After arranging the elements in increasing order, elements will be as 0 0 1 1 1.
// Input: arr[] = [1, 0, 1, 1, 1, 1, 1, 0, 0, 0]
// Output: [0, 0, 0, 0, 1, 1, 1, 1, 1, 1]
// Explanation: After arranging the elements in increasing order, elements will be 0 0 0 0 1 1 1 1 1 1.
// Input: arr[] = [1, 1, 1, 1]
// Output: [1, 1, 1, 1]
// Explanation: Since the array already contains only 1s, no change is needed.

// Constraints:
// 1 ≤ arr.size() ≤ 106
// arr[i] ∈ {0,1} for all valid indices i.

// class Solution {
//   public:
//     void binSort(vector<int> &arr) 
//     {
//         int start=0;
//         int end=arr.size()-1;
//         while(start<end)
//         {
//             if(arr[start]==0) 
//             {
//                 start++;
//             }
//             else if(arr[end]==1) 
//             {
//                 end--;
//             }
//             else 
//             {
//                 swap(arr[start],arr[end]);
//                 start++;
//                 end--;
//             }
//         }
//     }
// };

#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int>arr={1,0,1,1,0};
    int start=0;
    int end=arr.size()-1;
    while(start<end) 
    {
        if(arr[start]==0) 
        {
            start++;
        }
        else if(arr[end]==1) 
        {
            end--;
        }
        else 
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<arr.size();i++) 
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
//TC = O(N)
//SC = O(1)