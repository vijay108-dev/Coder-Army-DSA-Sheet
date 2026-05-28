// Rotate Array by One
// Difficulty: Basic
// Given an array arr, rotate the array by one position in clockwise direction.

// Examples:
// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
// Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
// Output: [3, 9, 8, 7, 6, 4, 2, 1]
// Explanation: After rotating clock-wise 3 comes in first position.

// Constraints:
// 1 ≤ arr.size() ≤ 105
// 0 ≤ arr[i] ≤ 105

// class Solution {
//   public:
//     void rotate(vector<int> &arr) 
//     {    
//         int n = arr.size();   
//         int i = 0;
//         int j = n-1;
//         while(i<j) 
//         {
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// };

#include <iostream>
#include <vector>
using namespace std;
    void rotate(vector<int> &arr) 
    {    
        int n = arr.size();   
        int i = 0;
        int j = n-1;
        while(i<j) 
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
int main() 
{
    
    vector<int>arr = {1,2,3,4,5};
    rotate(arr);
    for(int i=0;i<arr.size();i++) 
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
//TC = O(N)
//SC = O(1)