#include <bits/stdc++.h>
using namespace std; 

// This is the first problem on LeetCode, Two Sum.
// I have used the two-pointer approach to solve this program. The time complexity of this program is O(n^2)

vector<int> twoSum(vector<int>& nums, int target) { 
	for (int i = 0; i < nums.size() - 1; i++) { 
		for (int j = i + 1; j < nums.size(); j++) { 
			if (nums[i] + nums[j] == target) { 
				return {i, j}; 
			}
		}
	}
	return {}; 
}
