#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

// This is the solution to the "Leaders in an array" problem. 

vector<int> leaders(int a[], int n) { 
    vector<int> res; 
    int max = a[n-1]; 
    res.push_back(max); 
    for (int i=n-2; i >= 0; i--) { 
        if (a[i] < max) continue;
        else {
            max = a[i]; 
            res.push_back(max);
        }
    }
    reverse(res.begin(), res.end()); 
    return res; 
}
