#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

// This is the solution to the problem "Count more than n/k occurrences""
int countOccurence(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    int v = n / k;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int count = 0;
    for (auto e : mp)
    {
        if (e.second > v)
        {
            count++;
        }
    }
    return count;
}