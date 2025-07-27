// Given a number n, find all prime numbers from 2 to n.
// A prime is a number greater than 1 that has no divisors other than 1 and itself.
// But checking each number individually? That's slow.
// Sieve comes in and says: "Bro, let's think smarter."

// The Sieve of Eratosthenes is an ancient algorithm used to find all prime numbers 
// up to a specified integer. It works by iteratively marking the multiples 
// of each prime number as composite (not prime), starting from 2. 
// The remaining unmarked numbers are the prime numbers within the specified range.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool prime[1000] = {true}; // assuming n <= 1000

    for (int i = 2; i <= n; i++) {
        prime[i] = true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }

    return 0;
}
