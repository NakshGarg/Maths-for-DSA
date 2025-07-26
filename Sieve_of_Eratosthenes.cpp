// Given a number n, find all prime numbers from 2 to n.
// A prime is a number greater than 1 that has no divisors other than 1 and itself.
// But checking each number individually? That's slow.
// Sieve comes in and says: "Bro, let's think smarter."

#include <iostream>
#include <vector>
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n + 1, true);  // Initially assume all numbers are prime
    isPrime[0] = isPrime[1] = false;    // 0 and 1 are not prime

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            // Mark all multiples of i as non-prime
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    // Print all primes
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i])
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    sieve(n);
    return 0;
}
