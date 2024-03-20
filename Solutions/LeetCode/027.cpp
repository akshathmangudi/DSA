#include <vector>
using namespace std; 

/*
This removes all occurences of a value and counts the number 
of elements that do not equal the value.
*/
 
int removeElement(vector<int>& nums, int val) {
    int index = 0; 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) { 
            nums[index] = nums[i]; 
            index++;
        }
    }
    return index; 
}