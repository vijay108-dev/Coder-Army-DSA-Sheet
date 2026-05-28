// Second Largest
// Difficulty: Easy
// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

// Examples:

// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
// Input: arr[] = [10, 5, 10]
// Output: 5
// Explanation: The largest element of the array is 10 and the second largest element is 5.
// Input: arr[] = [10, 10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 and the second largest element does not exist.

// Constraints:
// 2 ≤ arr.size() ≤ 105
// 1 ≤ arr[i] ≤ 105


// int getSecondLargest(int *arr, int n) 
// {
    
//     int ans = INT_MIN;
//     // Largest element
//     for(int i=0;i<n;i++) 
//     {
//         if(arr[i]>ans)
//             ans=arr[i];
//     }
//     // Second largest
//     int second=INT_MIN;
//     for(int i=0;i<n;i++) 
//     {
//         if(arr[i]!=ans)
//             second=max(second, arr[i]);
//     }
//     if(second == INT_MIN)
//         return -1;

//     return second;
// }

#include <iostream>
using namespace std;
int getSecondLargest(int *arr, int n) 
{    
    int ans = INT_MIN;

    // Largest element
    for(int i=0;i<n;i++) 
    {
        if(arr[i]>ans)
            ans = arr[i];
    }

    // Second largest
    int second = INT_MIN;
    for(int i=0;i<n;i++) 
    {
        if(arr[i]!=ans)
            second = max(second,arr[i]);
    }
    if(second == INT_MIN)
        return -1;

    return second;
}

int main() 
{
    int arr[] = {12,35,1,10,34,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<getSecondLargest(arr,n)<<endl;

    return 0;
}

//TC = O(N)
//SC = O(1)