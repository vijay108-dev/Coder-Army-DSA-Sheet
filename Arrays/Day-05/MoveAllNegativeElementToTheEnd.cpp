// Move all negative elements to end

// Discuss Approach
// Difficulty: Easy
// Given an unsorted array arr[ ] having both negative and positive integers. Place all negative elements at the end of the array without changing the order of positive elements and negative elements.

// Note: Don't return any array, just in-place on the array.

// Examples:

// Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
// Output : [1, 3, 2, 11, 6, -1, -7, -5]
// Explanation: By doing operations we separated the integers without changing the order.
// Input : arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
// Output : [7, 9, 10, 11, -5, -3, -4, -1]

// Constraints:
// 1 ≤ arr.size ≤ 106
// -109 ≤ arr[i] ≤ 109

// class Solution {
//   public:
//     void segregateElements(vector<int>& arr) 
//     {
//         vector<int>temp;
//         for(int i=0;i<arr.size();i++) 
//         {
//             if(arr[i]>=0) 
//             {
//                 temp.push_back(arr[i]);
//             }
//         }
//         for(int i=0;i<arr.size();i++) 
//         {
//             if(arr[i]<0) 
//             {
//                 temp.push_back(arr[i]);
//             }
//         }

//         for(int i=0;i<arr.size();i++) 
//         {
//             arr[i]=temp[i];
//         }
//     }
// };

#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int>arr={1,-1,3,2,-7,-5,11,6};
    vector<int>temp;
    for(int i=0;i<arr.size();i++) 
    {
        if(arr[i]>=0) 
        {
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<arr.size();i++) 
    {
        if(arr[i]<0) 
        {
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<arr.size();i++) 
    {
        arr[i]=temp[i];
    }
    for(int i=0;i<arr.size();i++) 
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
//TC = O(N)
//SC = O(N)