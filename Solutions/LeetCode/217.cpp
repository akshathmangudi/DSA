#include <iostream>
#include <vector>
using namespace std; 

// This is the accepted code for Problem #217: Contains Duplicate
//
// The point of this program is to return true if there exists a duplicate, else return false. 
// I have used a map to track the frequencies of each element and if any element has a frequency over two, return true.

bool containsDuplicate(vector<int>& nums) { 
	unordered_map<int, int> ump; 
	for (int i = 0; i < nums.size(); i++) { 
		ump[nums[i]]++; 
	}

	for (auto c : ump) { 
		if (c.second > 1) { 
			return true; 
		}
	}
	return false; 
}
