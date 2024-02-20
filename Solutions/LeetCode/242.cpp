#include <bits/stdc++.h>
using namespace std;

// This is the solution to Problem #242: Valid anagram. 
// This program checks if two strings are anagrams, else false.

bool isAanagram(string s, string t) { 
	sort(s.begin(), s.end()); 
	sort(t.begin(), t.end()); 

	if (s == t) 
		return true; 
	return false; 
}
