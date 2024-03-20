#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// This is the code for the merge sorted array question. 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++) { 
            nums1[i+m] = nums2[i]; 
        }
        sort(nums1.begin(), nums1.end()); 
    }