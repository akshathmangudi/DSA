#include <bits/stdc++.h>

/*
Search and Insertion in O(1) time 
Simplicity is the main advantage for index mapping 
It can only be used for small datasets
*/

#define MAX 1000
using namespace std; 

bool has[MAX+1][2]; 

bool search(int x) { 
	if (x >= 0) {
		if (has[x][0] == 1)
			return true;
		else
			return false; 
	}

	x = abs(x); 
	if (has[x][1] == 1)
		return true; 
	return false;
}

void insert(int a[], int n) {
	for (int i = 0; i < n; i++) { 
		if (a[i] >= 0)
			has[a[i]][0] = 1; 
		else
			has[abs(a[i])][1] = 1; 
	}
}

int main() {
	int a[] = {4, 9, -5, -2, 0, 7, 3, 5}; 
	int n = sizeof(a)/sizeof(a[0]); 
	insert(a, n); 
	int x = 7; 
	if (search(x) == true) 
		cout << "Present"; 
	else 
		cout << "Not present"; 
	return 0; 
}
