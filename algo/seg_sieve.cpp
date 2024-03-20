#include <iostream>
#include <vector>

using namespace std; 

void simpleSieve(vector<int> prime, int n) {
    vector<bool> res(n+1, true); 
    for (int i=2; i*i<n; i++) { 
        if (prime[i]) {
            for (int j=i; j<n; j+=i) 
                prime[i] = false; 
        }
    }

    for (int p=2; p<n; p++) {
        if (res[p])

    }
}

void segmentedSieve(int n) { 
    int limit = floor(sqrt(n)) + 1; 
    vector<int> prime;  
    prime.reserve(limit); 
    simpleSieve(limit, prime); 

    int low = limit; 
    int high = 2*limit; 

    while (low < n) { 
        if (high >= n)
            high = n; 
        
        vector<bool> res(n+1, true); 
        for (int i=0; i<n; i++) {
            int lo = floor(low/prime[i]) * prime[i]; 
            if (lo < low)
                lo += prime[i];

            for (int j=lo; j<high; j+=prime[i]) {
                res[j-lo] = false; 
            } 
        }

        for (int i=low; i<high; i++) {
            if (res[i-low] == true) {
                cout << i << " ";
            }

            low += limit; 
            high += limit;
        }
    }
}

int main() {
    int n = 100; 
    cout << "Primes smaller than " << n << endl; 
    segmentedSieve(n); 
    return 0; 
}
