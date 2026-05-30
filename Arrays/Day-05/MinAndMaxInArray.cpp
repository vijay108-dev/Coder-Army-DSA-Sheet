// Min and Max in Array

// Difficulty: Basic
// Given an array arr[]. Your task is to find the minimum and maximum elements in the array.

// Examples:

// Input: arr[] = [1, 4, 3, 5, 8, 6]
// Output: [1, 8]
// Explanation: minimum and maximum elements of array are 1 and 8.
// Input: arr[] = [12, 3, 15, 7, 9]
// Output: [3, 15]
// Explanation: minimum and maximum element of array are 3 and 15.

// Constraints:
// 1 ≤ arr.size() ≤ 105
// 1 ≤ arr[i] ≤ 109

// class Solution {
//   public:
//     vector<int> getMinMax(vector<int> &arr) 
//     {
//         int mn=arr[0];
//         int mx=arr[0];
//         for(int i=1;i<arr.size();i++) 
//         {
//             if(arr[i]<mn) 
//             {
//                 mn=arr[i];
//             }

//             if(arr[i]>mx) 
//             {
//                 mx=arr[i];
//             }
//         }
//         return {mn,mx};
//     }
// };

#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int>arr={1,4,3,5,8,6};
    int mn = arr[0];
    int mx = arr[0];
    for(int i=1;i<arr.size();i++) 
    {
        if(arr[i]<mn) 
        {
            mn = arr[i];
        }

        if(arr[i]>mx) 
        {
            mx = arr[i];
        }
    }

    cout<<"Minimum = " <<mn<<endl;
    cout<<"Maximum = " <<mx<<endl;

    return 0;
}

//TC = O(N)
//SC = O(1)
