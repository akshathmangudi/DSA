#include <iostream>
#include <algorithm>

void reverse(int arr[], int size) { 
	int rev[size]; 
	// Non in-place algorithm to reverse
	for (int i = 0; i < size; i++) {
		 rev[i] = arr[size-i-1]; 
	}

	for (auto c : rev) { 
		std::cout << c; 
	}
	std::cout << std::endl;
}

// In-place algorithm to reverse
void rev_inplace(int arr[], int size) {
	int start = 0; 
	int end = size - 1;
	while (start < end) {
		int temp = arr[start]; 
		arr[start] = arr[end]; 
		arr[end] = temp;
		start++; 
		end--; 
	}
	
	for (int i = 0; i < size; i++) { 
		std::cout << arr[i]; 
	}
}	

int main() { 
	int arr[] = {1, 2, 3, 4, 5, 6}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	reverse(arr, n);
	std::reverse(arr, arr+n); // Built-in algo
	rev_inplace(arr, n);
	return 0;
}	

