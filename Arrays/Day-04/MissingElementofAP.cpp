// Missing element of AP

// Discuss Approach
// Difficulty: Medium
// Given a sorted array arr[] that represents an Arithmetic Progression (AP) with exactly one missing element, find the missing number.
// The array arr[] is sorted in either ascending or descending order.

// Note: An element will always exist that, upon inserting into a sequence forms Arithmetic progression. If the given sequence already forms a valid complete AP, return the (n+1)-th element that would come next in the sequence.

// Examples:

// Input: arr[] = [2, 4, 8, 10, 12, 14]
// Output: 6
// Explanation: Actual AP should be 2, 4, 6, 8, 10, 12, 14.
// Input: arr[] = [1, 6, 11, 16, 21, 31]
// Output: 26
// Explanation: Actual AP should be 1, 6, 11, 16, 21, 26, 31.
// Input: arr[] = [4, 7, 10, 13, 16]
// Output: 19
// Explanation: Since the sequence already forms a valid AP, the next element after 16 in the sequence would be 19. Therefore, the output is 19.

// Constraints:
// 2 ≤ arr.size() ≤ 105
// 0 ≤ arr[i] ≤ 2*107

// class Solution {
//   public:
//     int findMissing(vector<int> &arr) {
        
//         int n = arr.size();
        
//         // Find common difference
//         int d = min(arr[1] - arr[0], arr[2] - arr[1]);
        
//         // Traverse array
//         for(int i = 0; i < n - 1; i++) {
            
//             // Difference mismatch
//             if(arr[i + 1] - arr[i] != d) {
//                 return arr[i] + d;
//             }
//         }
        
//         // If AP already complete
//         return arr[n - 1] + d;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;
    int findMissing(vector<int>& arr) 
    {
        int n = arr.size();

        // Common difference
        int d = min(arr[1]-arr[0],arr[2]-arr[1]);

        // Traverse array
        for(int i=0;i<n-1;i++)
        {
            // Difference mismatch
            if(arr[i+1]-arr[i]!=d) 
            {
                return arr[i] + d;
            }
        }

        // If AP already complete
        return arr[n-1] + d;
    }
int main() 
{
    vector<int>arr = {2,4,8,10,12,14};
    cout<<findMissing(arr)<<endl;

    return 0;
}
//TC = O(N)
//SC = O(1)