// A perfect number is a positive integer that is equal to the sum of its 
// positive divisors, excluding the number itself. A divisor of an integer x is 
// an integer that can divide x evenly.  Given an integer n, return true if n 
// is a perfect number, otherwise return false.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (n == sum) {
        cout << "The number is a perfect number!";
    } else {
        cout << "The number is not a perfect number!";
    }

    return 0;
}
