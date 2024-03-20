#include <iostream>
#include <vector>
using namespace std; 
    
// This is the reverse string question which uses the two-pointers approach.
void reverseString(vector<char>& s) { 
    int start = 0; 
    int end = s.size() - 1; 
    while (start < end) { 
        char temp = s[start]; 
        s[start] = s[end]; 
        s[end] = temp; 
        start++; 
        end--; 
    }
}