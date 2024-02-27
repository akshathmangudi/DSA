#include <iostream>
#include <vector>

using namespace std;

void sieve(int n) {
    vector<bool> prime(n+1, true); 
    for (int i = 2; i * i <=n; i++) { 
        if (prime[i]) { 
            for (int j = 2 * i; j <= n; j += i) {
                prime[i] = false; 
            }
        }
    }

    for (int i = 2; i <= n; i++) { 
        if (prime[i]) {
            cout << i << " "; 
        }
    }
}

int main() { 
    int n = 77; 
    sieve(n); 
}