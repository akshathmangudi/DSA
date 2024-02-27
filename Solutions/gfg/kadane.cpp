#include <iostream>
#include <limits>

using namespace std; 

/*
    This is the solution to Kadane's Algorithm to finding the maximum subarray sum. 
    We will take two variables maxg (max_global) and maxc (max_current). 

    For every iteration, we will add the value of arr[i] to maxc and if that is greater than 
    the global value, we will update the global value. If maxc is less, we will update maxc to zero.

    This will work for negative numbers as well. 
*/

long long maxSubarraySum(int arr[], int n)
{

    long long maxg = INT_MIN, maxc = 0;
    for (int i = 0; i < n; i++)
    {
        maxc += arr[i];
        if (maxc > maxg)
            maxg = maxc;
        if (maxc < 0)
            maxc = 0;
    }
    return maxg;
}