// Given an integer n, return the smallest prime palindrome greater than or equal to n.
// An integer is prime if it has exactly two divisors: 1 and itself. Note that 1 is not a prime number.
// For example, 2, 3, 5, 7, 11, and 13 are all primes.
// An integer is a palindrome if it reads the same from left to right as it does from right to left.
// For example, 101 and 12321 are palindromes.

#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}
int smallestPrimePalindrome(int n) {
    while (true) {
        if (isPalindrome(n) && isPrime(n))
            return n;
        ++n;

        // Optimization: Skip even-length palindromes > 11
        if (n > 11 && n % 2 == 0)
            ++n;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = smallestPrimePalindrome(n);
    cout << "Smallest prime palindrome >= " << n << " is: " << result << endl;

    return 0;
}
